#include <iostream>
#include <fstream>
#include <sstream> 
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <vector>
#include <windows.h>

struct Res{
    struct Sentence {
        struct Line {
            std::vector<std::string> words;
            
            bool operator==(const Line& other) const {
                if (words.size() != other.words.size()) {
                    return false;
                }

                for (auto i = 0; i < words.size(); i++) {
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
                for (auto i = 0; i < words.size(); i++) {
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

std::vector<std::string> testcases(2);
std::vector<Res> refs(2);
std::vector<Res> outs(2);

void initTestFiles() {
    testcases[0] = R"(CREATE DATABASE test_university;
USE DATABASE test_university;
CREATE TABLE student (
    ID INTEGER,
    Name TEXT,
    GPA FLOAT,
    Major TEXT
);
CREATE TABLE course (
    CourseID INTEGER,
    CourseName TEXT,
    Department TEXT
);
CREATE TABLE enrollment (
    StudentID INTEGER,
    CourseID INTEGER
);
INSERT INTO student VALUES (1, 'Alice Johnson', 3.5, 'Computer Science');
INSERT INTO student VALUES (2, 'Bob Smith', 3.6, 'Electrical Engineering');
INSERT INTO student VALUES (3, 'Catherine Lee', 3.9, 'Mathematics');
INSERT INTO student VALUES (4, 'Dave Brown', 3.2, 'Physics');
INSERT INTO student VALUES (5, 'Eva White', 3.8, 'Chemistry');
INSERT INTO course VALUES (101, 'Introduction to Computer Science', 'Computer Science');
INSERT INTO course VALUES (102, 'Circuit Analysis', 'Electrical Engineering');
INSERT INTO course VALUES (103, 'Linear Algebra', 'Mathematics');
INSERT INTO course VALUES (104, 'Quantum Mechanics', 'Physics');
INSERT INTO course VALUES (105, 'Organic Chemistry', 'Chemistry');
INSERT INTO enrollment VALUES (1, 101);
INSERT INTO enrollment VALUES (1, 103);
INSERT INTO enrollment VALUES (2, 102);
INSERT INTO enrollment VALUES (3, 103);
INSERT INTO enrollment VALUES (4, 104);
INSERT INTO enrollment VALUES (5, 105);
SELECT * FROM student;
SELECT * FROM course;
SELECT student.Name, enrollment.CourseID
FROM student
INNER JOIN enrollment
ON student.ID = enrollment.StudentID
WHERE student.Name = 'Alice Johnson';
UPDATE student SET GPA = 4.0 WHERE Name = 'Alice Johnson';
DELETE FROM student WHERE Name = 'Dave Brown';
SELECT * FROM student WHERE Name = 'Alice Johnson';
SELECT student.Name, enrollment.CourseID
FROM student
INNER JOIN enrollment
ON student.ID = enrollment.StudentID;
DELETE FROM course WHERE CourseName = 'Quantum Mechanics';
SELECT * FROM course;)";

    testcases[1] = R"(CREATE DATABASE university_db;
USE DATABASE university_db;
CREATE TABLE student (
    ID INTEGER,
    Name TEXT,
    GPA FLOAT,
    Major TEXT
);
INSERT INTO student VALUES (1000, 'Jay Chou', 3.0, 'Microelectronics');
INSERT INTO student VALUES (1001, 'Taylor Swift', 3.2, 'Data Science');
INSERT INTO student VALUES (1002, 'Bob Dylan', 3.5, 'Financial Technology');
SELECT * FROM student;
SELECT Name, GPA FROM student WHERE GPA > 3.1;
UPDATE student SET GPA = 3.8 WHERE ID = 1001;
DELETE FROM student WHERE ID = 1000;
SELECT * FROM student;
CREATE TABLE course_enrollment (
    StudentID INTEGER,
    Course TEXT
);
INSERT INTO course_enrollment VALUES (1001, 'Data Science');
INSERT INTO course_enrollment VALUES (1001, 'Machine Learning');
INSERT INTO course_enrollment VALUES (1002, 'Financial Technology');
INSERT INTO course_enrollment VALUES (1002, 'Advanced Algorithms');
SELECT student.Name, course_enrollment.Course
FROM student
INNER JOIN course_enrollment ON student.ID = course_enrollment.StudentID;
DROP TABLE student;)";
}

void initRefs() {
    refs[0].str = R"(ID,Name,GPA,Major
1|Alice Johnson|3.50|Computer Science
2|Bob Smith|3.60|Electrical Engineering
3|Catherine Lee|3.90|Mathematics
4|Dave Brown|3.20|Physics
5|Eva White|3.80|Chemistry
---
CourseID,CourseName,Department
101|Introduction to Computer Science|Computer Science
102|Circuit Analysis|Electrical Engineering
103|Linear Algebra|Mathematics
104|Quantum Mechanics|Physics
105|Organic Chemistry|Chemistry
---
student.Name,enrollment.CourseID
Alice Johnson|101
Alice Johnson|103
---
ID,Name,GPA,Major
1|Alice Johnson|4.0|Computer Science
---
student.Name,enrollment.CourseID
Alice Johnson|101
Alice Johnson|103
Bob Smith|102
Catherine Lee|103
Eva White|105
---
CourseID,CourseName,Department
101|Introduction to Computer Science|Computer Science
102|Circuit Analysis|Electrical Engineering
103|Linear Algebra|Mathematics
105|Organic Chemistry|Chemistry
---
)";

    refs[1].str = R"(ID,Name,GPA,Major
1000|Jay Chou|3.00|Microelectronics
1001|Taylor Swift|3.20|Data Science
1002|Bob Dylan|3.50|Financial Technology
---
Name,GPA
Taylor Swift|3.20
Bob Dylan|3.50
---
ID,Name,GPA,Major
1001|Taylor Swift|3.80|Data Science
1002|Bob Dylan|3.50|Financial Technology
---
student.Name,course_enrollment.Course
Taylor Swift|Data Science
Taylor Swift|Machine Learning
Bob Dylan|Advanced Algorithms
Bob Dylan|Financial Technology
---
)";
}

void parseRefs(Res& r) {
    Res::Sentence s;
    Res::Sentence::Line l;

    std::istringstream refStream(r.str);
    std::string refLine;

    while (1) {
        bool refRead = static_cast<bool>(std::getline(refStream, refLine));

        if (!refRead) {
            break;
        }

        if (refLine.find("---") != std::string::npos) {
            r.sentences.push_back(s);
            s = Res::Sentence();
            continue;
        }

        if (s.title.words.size() == 0) {
            std::istringstream titleStream(refLine);
            std::string titleWord;

            while (std::getline(titleStream, titleWord, ',')) {
                s.title.words.push_back(titleWord);
            }

            continue;
        }

        Res::Sentence::Line l;
        std::istringstream refLineStream(refLine);
        std::string word;

        while (std::getline(refLineStream, word, '|')) {
            l.words.push_back(word);
        }

        s.lines.push_back(l);
    }

    r.sentences.push_back(s);

    for (auto& s : r.sentences) {
        for (auto& l : s.lines) {
            for (auto& w : l.words) {
                std::cout << w << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    refs.push_back(r);
}

void parseOut(Res& o) {
    Res::Sentence s;
    Res::Sentence::Line l;

    std::istringstream outStream(o.str);
    std::string outLine;

    while (1) {
        bool outRead = static_cast<bool>(std::getline(outStream, outLine));

        if (!outRead) {
            break;
        }

        if (outLine.find("---") != std::string::npos) {
            o.sentences.push_back(s);
            s = Res::Sentence();
            continue;
        }

        if (s.title.words.size() == 0) {
            std::istringstream titleStream(outLine);
            std::string titleWord;

            while (std::getline(titleStream, titleWord, ',')) {
                s.title.words.push_back(titleWord);
            }

            continue;
        }

        Res::Sentence::Line l;
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
            
            l.words.push_back(word);
        }

        s.lines.push_back(l);
    }

    o.sentences.push_back(s);

    outs.push_back(o);
}

void createDirectory(const std::string& directoryPath) {
    if (CreateDirectory(directoryPath.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
        std::cout << "Directory created or already exists: " << directoryPath << std::endl;
    } else {
        std::cerr << "Error creating directory: " << directoryPath << std::endl;
    }
}

void createTestFiles() {
    // create a directory for the test files
    std::cout << "Creating test files..." << std::endl;
    createDirectory("test_files");

    initTestFiles();

    // create test files
    std::ofstream file;
    for (int i = 0; i < testcases.size(); i++) {
        file.open("test_files/test" + std::to_string(i) + ".sql");
        file << testcases[i];
        file.close();
    }

    initRefs();

    // create ref files
    for (int i = 0; i < testcases.size(); i++) {
        parseRefs(refs[i]);
    }
}

void exec(const std::string arg0, const std::string arg1, const std::string arg2) {
    // 构建命令字符串
    std::string command = arg0 + " " + arg1 + " " + arg2;

    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // Start the child process.
    if (!CreateProcess(NULL,   // No module name (use command line)
        const_cast<char*>(command.c_str()), // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si,            // Pointer to STARTUPINFO structure
        &pi)           // Pointer to PROCESS_INFORMATION structure
        ) {
        std::cerr << "CreateProcess failed (" << GetLastError() << ").\n";
    }

    // Wait until child process exits.
    WaitForSingleObject(pi.hProcess, INFINITE);

    // Close process and thread handles.
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    std::cout << "command exec success" << std::endl;
}

std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return content;
}

bool compareOutputWithFile(const int index, const std::string& outputFile) {
    std::string output = readFile(outputFile);

    Res out;
    out.str = output;

    parseOut(out);

    for (auto i = 0; i < refs[index].sentences.size(); i++) {
        Res::Sentence matchedResSentence;
        matchedResSentence.title = refs[index].sentences[i].title;
        Res::Sentence curOutSentence = out.sentences[i];
        Res::Sentence curRefSentence = refs[index].sentences[i];

        if (refs[index].sentences[i].title != out.sentences[i].title) {
            std::cerr << "\033[1;31m" << "Test case " << index << " Output " << i + 1 << " failed!" << "\033[0m" << std::endl;
            std::cerr << "\033[1;31m" << "Title mismatch!" << "\033[0m" << std::endl;
            std::cerr << "\033[1;32m" << "Expected: " << refs[index].sentences[i].title.toString() << "\033[0m" << std::endl;
            std::cerr << "\033[1;31m" << "Got: " << out.sentences[i].title.toString() << "\033[0m" << std::endl;
            return false;
        }

        for (auto j = 0; j < refs[index].sentences[i].lines.size();) {
            // check if sentence in ref matches with the output
            // if match, remove the sentence from the output and ref
            bool found = false;

            for (auto k = 0;k < out.sentences[i].lines.size();k++) {
                if (refs[index].sentences[i].lines[j] == out.sentences[i].lines[k]) {
                    found = true;

                    matchedResSentence.lines.push_back(refs[index].sentences[i].lines[j]);

                    refs[index].sentences[i].lines.erase(refs[index].sentences[i].lines.begin() + j);
                    out.sentences[i].lines.erase(out.sentences[i].lines.begin() + k);
                    break;
                }
            }

            if (!found) {
                j++;
            }
        }

        if (refs[index].sentences[i].lines.size() != 0 || out.sentences[i].lines.size() != 0) {
            std::cerr << "\033[1;31m" << "Test case " << index << " Output " << i + 1 << " failed!" << "\033[0m" << std::endl;
            
            for (auto& l : curRefSentence.lines) {
                std::cout << "\033[1;32m" << "Expected: " << l.toString() << "\033[0m" << std::endl;
            }

            for (auto& l : curOutSentence.lines) {
                std::cout << "\033[1;31m" << "Got: " << l.toString() << "\033[0m" << std::endl;
            }

            return false;
        } else {
            std::cout << "\033[1;32m" << "Test case " << index << " Output " << i + 1 << " passed!" << "\033[0m" << std::endl;

            std::cout << "\033[1;34m" << "Matched: " << matchedResSentence.title.toString() << "\033[0m" << std::endl;
            for (auto& l : matchedResSentence.lines) {
                std::cout << "\033[1;34m" << "Matched: " << l.toString() << "\033[0m" << std::endl;
            }
        }

        std::cout << std::endl;
    }

    return true;
}

int main(int argc, char* argv[]) {
    createTestFiles();

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <path of executable>" << std::endl;

        return 1;
    }

    try {
        createDirectory("outputs");
        for (auto i = 0; i < testcases.size(); i++) {
            exec(argv[1], "test_files/test" + std::to_string(i) + ".sql", "outputs/output" + std::to_string(i) + ".txt");
        }

        std::cout << "****** Comparing output with reference ******" << std::endl;

        size_t failed = 0;

        for (auto i = 0; i < testcases.size(); i++) {
            if (!compareOutputWithFile(i, "outputs/output" + std::to_string(i) + ".txt")) {
                failed++;
            }

            std::cout << std::endl;
        }

        if (failed == 0) {
            std::cout << "\033[1;34m" << "All test cases passed!" << "\033[0m" << std::endl;
        } else {
            std::cerr << "\033[1;31m" << "Passed: " << testcases.size() - failed << "/" << testcases.size() << "\033[0m" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}