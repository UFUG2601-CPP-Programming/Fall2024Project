//
// Created by chenzihang on 24-12-4.
//

#ifndef REFERENCES_H
#define REFERENCES_H

#include <vector>
#include <string>
#include <sstream>

struct Res{
    struct Sentence {
        struct Line {
            std::vector<std::string> words;

            bool operator==(const Line& other) const {
                if (words.size() != other.words.size()) {
                    return false;
                }

                for (size_t i = 0; i < words.size(); i++) {
                    if (words[i] != other.words[i]) {
                        return false;
                    }
                }

                return true;
            }

            bool operator!=(const Line& other) const {
                return !(*this == other);
            }

            std::string toString() const {
                std::string str;
                // insert ',' between words except for the last word
                for (size_t i = 0; i < words.size(); i++) {
                    str += words[i];
                    if (i != words.size() - 1) {
                        str += ",";
                    }
                }
                return str;
            }
        };

        std::vector<Line> lines;

        Line title;
    };

    std::vector<Sentence> sentences;

    std::string str;
};

static std::vector<Res> refs(1);
static std::vector<Res> outs(1);

inline void initRefs() {
    refs[0].str = R"(ID,Name,GPA,Major
---
ID,Name,GPA,Major
1|Alice Johnson|3.50|Computer Science
2|Bob Smith|3.60|Electrical Engineering
3|Catherine Lee|3.90|Mathematics
4|Dave Brown|3.20|Physics
5|Eva White|3.80|Chemistry
---
)";

}

inline void parseRefs(Res& ref) {
    Res::Sentence sentence;

    std::istringstream refStream(ref.str);
    std::string refLine;

    while (true) {
        bool refRead = static_cast<bool>(std::getline(refStream, refLine));

        if (!refRead) {
            break;
        }

        if (refLine.find("---") != std::string::npos) {
            ref.sentences.push_back(sentence);
            sentence = Res::Sentence();
            continue;
        }

        if (sentence.title.words.empty()) {
            std::istringstream titleStream(refLine);
            std::string titleWord;

            while (std::getline(titleStream, titleWord, ',')) {
                sentence.title.words.push_back(titleWord);
            }

            continue;
        }

        Res::Sentence::Line line;
        std::istringstream refLineStream(refLine);
        std::string word;

        while (std::getline(refLineStream, word, '|')) {
            line.words.push_back(word);
        }

        sentence.lines.push_back(line);
    }

    ref.sentences.push_back(sentence);

    for (auto& s : ref.sentences) {
        for (auto& line : s.lines) {
            for (auto& w : line.words) {
                std::cout << w << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    refs.push_back(ref);
}

inline void parseOut(Res& output) {
    Res::Sentence sentence;

    std::istringstream outStream(output.str);
    std::string outLine;

    while (true) {
        bool outRead = static_cast<bool>(std::getline(outStream, outLine));

        if (!outRead) {
            break;
        }

        if (outLine.find("---") != std::string::npos) {
            output.sentences.push_back(sentence);
            sentence = Res::Sentence();
            continue;
        }

        if (sentence.title.words.empty()) {
            std::istringstream titleStream(outLine);
            std::string titleWord;

            while (std::getline(titleStream, titleWord, ',')) {
                sentence.title.words.push_back(titleWord);
            }

            continue;
        }

        Res::Sentence::Line line;
        std::istringstream outLineStream(outLine);
        std::string word;

        while (std::getline(outLineStream, word, ',')) {
            // remove ' and " at the beginning of the word
            if (word[0] == '\'' || word[0] == '\"') {
                word = word.substr(1, word.size() - 2);
            }

            // remove ' and " at the end of the word
            if (word[word.size() - 1] == '\'' || word[word.size() - 1] == '\"') {
                word = word.substr(0, word.size() - 1);
            }

            line.words.push_back(word);
        }

        sentence.lines.push_back(line);
    }

    output.sentences.push_back(sentence);

    outs.push_back(output);
}

#endif //REFERENCES_H
