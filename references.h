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

static std::vector<Res> refs(4);
static std::vector<Res> outs(4);

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
    refs[1].str = R"(StudentID,FirstName,LastName,Age
0|Elle|Scott|70
1|Elle|Torres|53
2|Elle|Nguyen|48
3|Elle|Hill|47
4|Elle|Flores|22
5|Elle|Green|61
6|Elle|Smith|73
7|Elle|Johnson|26
8|Elle|Williams|54
9|Elle|Brown|70
10|Elle|Jones|29
11|Elle|Garcia|27
12|Elle|Miller|64
13|Elle|Davis|77
14|Elle|Rodriguez|62
15|Elle|Martinez|29
16|Elle|Hernandez|25
17|Elle|Lopez|40
18|Elle|Wilson|53
19|Elle|Anderson|67
20|Elle|Thomas|81
21|Elle|Taylor|42
22|Fred|Scott|37
23|Fred|Torres|59
24|Fred|Nguyen|52
25|Fred|Hill|55
26|Fred|Flores|74
27|Fred|Green|63
28|Fred|Smith|38
29|Fred|Johnson|28
30|Fred|Williams|30
31|Fred|Brown|58
32|Fred|Jones|87
33|Fred|Garcia|19
34|Fred|Miller|57
35|Fred|Davis|74
36|Fred|Rodriguez|75
37|Fred|Martinez|62
38|Fred|Hernandez|44
39|Fred|Lopez|37
40|Fred|Wilson|65
41|Fred|Anderson|85
42|Fred|Thomas|58
43|Fred|Taylor|77
44|Gina|Scott|70
45|Gina|Torres|23
46|Gina|Nguyen|71
47|Gina|Hill|40
48|Gina|Flores|59
49|Gina|Green|82
50|Gina|Smith|66
51|Gina|Johnson|80
52|Gina|Williams|23
53|Gina|Brown|61
54|Gina|Jones|71
55|Gina|Garcia|50
56|Gina|Miller|52
57|Gina|Davis|44
58|Gina|Rodriguez|73
59|Gina|Martinez|71
60|Gina|Hernandez|67
61|Gina|Lopez|85
62|Gina|Wilson|77
63|Gina|Anderson|65
64|Gina|Thomas|27
65|Gina|Taylor|21
66|Harry|Scott|30
67|Harry|Torres|46
68|Harry|Nguyen|22
69|Harry|Hill|43
70|Harry|Flores|38
71|Harry|Green|72
72|Harry|Smith|83
73|Harry|Johnson|48
74|Harry|Williams|74
75|Harry|Brown|79
76|Harry|Jones|51
77|Harry|Garcia|20
78|Harry|Miller|28
79|Harry|Davis|27
80|Harry|Rodriguez|60
81|Harry|Martinez|50
82|Harry|Hernandez|47
83|Harry|Lopez|59
84|Harry|Wilson|44
85|Harry|Anderson|65
86|Harry|Thomas|62
87|Harry|Taylor|89
88|Ina|Scott|27
89|Ina|Torres|22
90|Ina|Nguyen|58
91|Ina|Hill|70
92|Ina|Flores|60
93|Ina|Green|80
94|Ina|Smith|55
95|Ina|Johnson|45
96|Ina|Williams|28
97|Ina|Brown|64
98|Ina|Jones|45
99|Ina|Garcia|56
100|Ina|Miller|88
101|Ina|Davis|80
102|Ina|Rodriguez|53
103|Ina|Martinez|75
104|Ina|Hernandez|79
105|Ina|Lopez|40
106|Ina|Wilson|29
107|Ina|Anderson|29
108|Ina|Thomas|53
109|Ina|Taylor|44
110|Joel|Scott|59
111|Joel|Torres|63
112|Joel|Nguyen|75
113|Joel|Hill|42
114|Joel|Flores|56
115|Joel|Green|40
116|Joel|Smith|47
117|Joel|Johnson|21
118|Joel|Williams|83
119|Joel|Brown|81
120|Joel|Jones|45
121|Joel|Garcia|40
122|Joel|Miller|64
123|Joel|Davis|38
124|Joel|Rodriguez|25
125|Joel|Martinez|19
126|Joel|Hernandez|70
127|Joel|Lopez|25
128|Joel|Wilson|37
129|Joel|Anderson|45
130|Joel|Thomas|24
131|Joel|Taylor|64
132|Katy|Scott|58
133|Katy|Torres|36
134|Katy|Nguyen|85
135|Katy|Hill|86
136|Katy|Flores|42
137|Katy|Green|38
138|Katy|Smith|48
139|Katy|Johnson|27
140|Katy|Williams|87
141|Katy|Brown|39
142|Katy|Jones|81
143|Katy|Garcia|30
144|Katy|Miller|23
145|Katy|Davis|46
146|Katy|Rodriguez|72
147|Katy|Martinez|25
148|Katy|Hernandez|43
149|Katy|Lopez|23
150|Katy|Wilson|61
151|Katy|Anderson|79
152|Katy|Thomas|56
153|Katy|Taylor|29
154|Liam|Scott|32
155|Liam|Torres|20
156|Liam|Nguyen|35
157|Liam|Hill|88
158|Liam|Flores|19
159|Liam|Green|39
160|Liam|Smith|75
161|Liam|Johnson|61
162|Liam|Williams|25
163|Liam|Brown|24
164|Liam|Jones|21
165|Liam|Garcia|86
166|Liam|Miller|62
167|Liam|Davis|28
168|Liam|Rodriguez|46
169|Liam|Martinez|61
170|Liam|Hernandez|44
171|Liam|Lopez|34
172|Liam|Wilson|72
173|Liam|Anderson|69
174|Liam|Thomas|70
175|Liam|Taylor|52
176|Mona|Scott|81
177|Mona|Torres|71
178|Mona|Nguyen|33
179|Mona|Hill|29
180|Mona|Flores|76
181|Mona|Green|87
182|Mona|Smith|64
183|Mona|Johnson|61
184|Mona|Williams|36
185|Mona|Brown|23
186|Mona|Jones|88
187|Mona|Garcia|54
188|Mona|Miller|36
189|Mona|Davis|85
190|Mona|Rodriguez|80
191|Mona|Martinez|80
192|Mona|Hernandez|56
193|Mona|Lopez|66
194|Mona|Wilson|74
195|Mona|Anderson|38
196|Mona|Thomas|66
197|Mona|Taylor|70
198|Ned|Scott|20
199|Ned|Torres|47
200|Ned|Nguyen|53
201|Ned|Hill|31
202|Ned|Flores|31
203|Ned|Green|49
204|Ned|Smith|26
205|Ned|Johnson|64
206|Ned|Williams|56
207|Ned|Brown|19
208|Ned|Jones|89
209|Ned|Garcia|53
210|Ned|Miller|61
211|Ned|Davis|31
212|Ned|Rodriguez|80
213|Ned|Martinez|25
214|Ned|Hernandez|87
215|Ned|Lopez|50
216|Ned|Wilson|25
217|Ned|Anderson|64
218|Ned|Thomas|22
219|Ned|Taylor|29
220|Olive|Scott|60
221|Olive|Torres|87
222|Olive|Nguyen|60
223|Olive|Hill|26
224|Olive|Flores|88
225|Olive|Green|60
226|Olive|Smith|67
227|Olive|Johnson|47
228|Olive|Williams|75
229|Olive|Brown|34
230|Olive|Jones|29
231|Olive|Garcia|61
232|Olive|Miller|44
233|Olive|Davis|62
234|Olive|Rodriguez|60
235|Olive|Martinez|66
236|Olive|Hernandez|67
237|Olive|Lopez|37
238|Olive|Wilson|35
239|Olive|Anderson|42
240|Olive|Thomas|56
241|Olive|Taylor|28
242|Pete|Scott|20
243|Pete|Torres|40
244|Pete|Nguyen|70
245|Pete|Hill|21
246|Pete|Flores|31
247|Pete|Green|54
248|Pete|Smith|88
249|Pete|Johnson|28
250|Pete|Williams|64
251|Pete|Brown|51
252|Pete|Jones|25
253|Pete|Garcia|36
254|Pete|Miller|34
---
COLUMN1,COLUMN2
1|A
---)";

    refs[2].str = R"(ID,Name,GPA,Major
1|Alice Johnson|3.50|Computer Science
2|Bob Smith|3.60|Electrical Engineering
3|Catherine Lee|3.90|Mathematics
4|Dave Brown|3.20|Physics
5|Eva White|3.80|Chemistry
---
ID,Name,GPA,Major
1|Alice Johnson|4.00|Computer Science
---
)";

    refs[3].str =  R"(ID,Name,GPA,Major
1|Alice Johnson|4.00|Computer Science
2|Bob Smith|3.60|Electrical Engineering
3|Catherine Lee|3.90|Mathematics
4|Dave Brown|3.20|Physics
5|Eva White|3.80|Chemistry
6|Elle Flores|0.20|Physics
7|Ina Rodriguez|3.50|Chemistry
---
ID,Name,GPA,Major
6|Elle Flores|1.00|Physics
---)";

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
