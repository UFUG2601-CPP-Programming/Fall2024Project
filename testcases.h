//
// Created by chenzihang on 24-12-4.
//

#ifndef TESTCASES_H
#define TESTCASES_H

#include <vector>
#include <string>

static std::vector<std::string> testcases(1);

inline void initTestCases() {
    testcases[0] = R"(CREATE DATABASE test_university_0;
USE DATABASE test_university_0;
CREATE TABLE student (
    ID INTEGER,
    Name TEXT,
    GPA FLOAT,
    Major TEXT
);
SELECT * FROM student;
INSERT INTO student VALUES (1, 'Alice Johnson', 3.5, 'Computer Science');
INSERT INTO student VALUES (2, 'Bob Smith', 3.6, 'Electrical Engineering');
INSERT INTO student VALUES (3, 'Catherine Lee', 3.9, 'Mathematics');
INSERT INTO student VALUES (4, 'Dave Brown', 3.2, 'Physics');
INSERT INTO student VALUES (5, 'Eva White', 3.8, 'Chemistry');
SELECT * FROM student;)";

}


#endif //TESTCASES_H
