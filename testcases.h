//
// Created by chenzihang on 24-12-4.
//

#ifndef TESTCASES_H
#define TESTCASES_H

#include <vector>
#include <string>

static std::vector<std::string> testcases(10);

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

        testcases[1] = R"(CREATE DATABASE UniversityDB;
USE DATABASE UniversityDB;
CREATE TABLE Students (
    StudentID INTEGER,
    FirstName TEXT,
    LastName TEXT,
    Age INTEGER
);

INSERT INTO Students VALUES (0, 'Elle', 'Scott', 70);
INSERT INTO Students VALUES (1, 'Elle', 'Torres', 53);
INSERT INTO Students VALUES (2, 'Elle', 'Nguyen', 48);
INSERT INTO Students VALUES (3, 'Elle', 'Hill', 47);
INSERT INTO Students VALUES (4, 'Elle', 'Flores', 22);
INSERT INTO Students VALUES (5, 'Elle', 'Green', 61);
INSERT INTO Students VALUES (6, 'Elle', 'Smith', 73);
INSERT INTO Students VALUES (7, 'Elle', 'Johnson', 26);
INSERT INTO Students VALUES (8, 'Elle', 'Williams', 54);
INSERT INTO Students VALUES (9, 'Elle', 'Brown', 70);
INSERT INTO Students VALUES (10, 'Elle', 'Jones', 29);
INSERT INTO Students VALUES (11, 'Elle', 'Garcia', 27);
INSERT INTO Students VALUES (12, 'Elle', 'Miller', 64);
INSERT INTO Students VALUES (13, 'Elle', 'Davis', 77);
INSERT INTO Students VALUES (14, 'Elle', 'Rodriguez', 62);
INSERT INTO Students VALUES (15, 'Elle', 'Martinez', 29);
INSERT INTO Students VALUES (16, 'Elle', 'Hernandez', 25);
INSERT INTO Students VALUES (17, 'Elle', 'Lopez', 40);
INSERT INTO Students VALUES (18, 'Elle', 'Wilson', 53);
INSERT INTO Students VALUES (19, 'Elle', 'Anderson', 67);
INSERT INTO Students VALUES (20, 'Elle', 'Thomas', 81);
INSERT INTO Students VALUES (21, 'Elle', 'Taylor', 42);
INSERT INTO Students VALUES (22, 'Fred', 'Scott', 37);
INSERT INTO Students VALUES (23, 'Fred', 'Torres', 59);
INSERT INTO Students VALUES (24, 'Fred', 'Nguyen', 52);
INSERT INTO Students VALUES (25, 'Fred', 'Hill', 55);
INSERT INTO Students VALUES (26, 'Fred', 'Flores', 74);
INSERT INTO Students VALUES (27, 'Fred', 'Green', 63);
INSERT INTO Students VALUES (28, 'Fred', 'Smith', 38);
INSERT INTO Students VALUES (29, 'Fred', 'Johnson', 28);
INSERT INTO Students VALUES (30, 'Fred', 'Williams', 30);
INSERT INTO Students VALUES (31, 'Fred', 'Brown', 58);
INSERT INTO Students VALUES (32, 'Fred', 'Jones', 87);
INSERT INTO Students VALUES (33, 'Fred', 'Garcia', 19);
INSERT INTO Students VALUES (34, 'Fred', 'Miller', 57);
INSERT INTO Students VALUES (35, 'Fred', 'Davis', 74);
INSERT INTO Students VALUES (36, 'Fred', 'Rodriguez', 75);
INSERT INTO Students VALUES (37, 'Fred', 'Martinez', 62);
INSERT INTO Students VALUES (38, 'Fred', 'Hernandez', 44);
INSERT INTO Students VALUES (39, 'Fred', 'Lopez', 37);
INSERT INTO Students VALUES (40, 'Fred', 'Wilson', 65);
INSERT INTO Students VALUES (41, 'Fred', 'Anderson', 85);
INSERT INTO Students VALUES (42, 'Fred', 'Thomas', 58);
INSERT INTO Students VALUES (43, 'Fred', 'Taylor', 77);
INSERT INTO Students VALUES (44, 'Gina', 'Scott', 70);
INSERT INTO Students VALUES (45, 'Gina', 'Torres', 23);
INSERT INTO Students VALUES (46, 'Gina', 'Nguyen', 71);
INSERT INTO Students VALUES (47, 'Gina', 'Hill', 40);
INSERT INTO Students VALUES (48, 'Gina', 'Flores', 59);
INSERT INTO Students VALUES (49, 'Gina', 'Green', 82);
INSERT INTO Students VALUES (50, 'Gina', 'Smith', 66);
INSERT INTO Students VALUES (51, 'Gina', 'Johnson', 80);
INSERT INTO Students VALUES (52, 'Gina', 'Williams', 23);
INSERT INTO Students VALUES (53, 'Gina', 'Brown', 61);
INSERT INTO Students VALUES (54, 'Gina', 'Jones', 71);
INSERT INTO Students VALUES (55, 'Gina', 'Garcia', 50);
INSERT INTO Students VALUES (56, 'Gina', 'Miller', 52);
INSERT INTO Students VALUES (57, 'Gina', 'Davis', 44);
INSERT INTO Students VALUES (58, 'Gina', 'Rodriguez', 73);
INSERT INTO Students VALUES (59, 'Gina', 'Martinez', 71);
INSERT INTO Students VALUES (60, 'Gina', 'Hernandez', 67);
INSERT INTO Students VALUES (61, 'Gina', 'Lopez', 85);
INSERT INTO Students VALUES (62, 'Gina', 'Wilson', 77);
INSERT INTO Students VALUES (63, 'Gina', 'Anderson', 65);
INSERT INTO Students VALUES (64, 'Gina', 'Thomas', 27);
INSERT INTO Students VALUES (65, 'Gina', 'Taylor', 21);
INSERT INTO Students VALUES (66, 'Harry', 'Scott', 30);
INSERT INTO Students VALUES (67, 'Harry', 'Torres', 46);
INSERT INTO Students VALUES (68, 'Harry', 'Nguyen', 22);
INSERT INTO Students VALUES (69, 'Harry', 'Hill', 43);
INSERT INTO Students VALUES (70, 'Harry', 'Flores', 38);
INSERT INTO Students VALUES (71, 'Harry', 'Green', 72);
INSERT INTO Students VALUES (72, 'Harry', 'Smith', 83);
INSERT INTO Students VALUES (73, 'Harry', 'Johnson', 48);
INSERT INTO Students VALUES (74, 'Harry', 'Williams', 74);
INSERT INTO Students VALUES (75, 'Harry', 'Brown', 79);
INSERT INTO Students VALUES (76, 'Harry', 'Jones', 51);
INSERT INTO Students VALUES (77, 'Harry', 'Garcia', 20);
INSERT INTO Students VALUES (78, 'Harry', 'Miller', 28);
INSERT INTO Students VALUES (79, 'Harry', 'Davis', 27);
INSERT INTO Students VALUES (80, 'Harry', 'Rodriguez', 60);
INSERT INTO Students VALUES (81, 'Harry', 'Martinez', 50);
INSERT INTO Students VALUES (82, 'Harry', 'Hernandez', 47);
INSERT INTO Students VALUES (83, 'Harry', 'Lopez', 59);
INSERT INTO Students VALUES (84, 'Harry', 'Wilson', 44);
INSERT INTO Students VALUES (85, 'Harry', 'Anderson', 65);
INSERT INTO Students VALUES (86, 'Harry', 'Thomas', 62);
INSERT INTO Students VALUES (87, 'Harry', 'Taylor', 89);
INSERT INTO Students VALUES (88, 'Ina', 'Scott', 27);
INSERT INTO Students VALUES (89, 'Ina', 'Torres', 22);
INSERT INTO Students VALUES (90, 'Ina', 'Nguyen', 58);
INSERT INTO Students VALUES (91, 'Ina', 'Hill', 70);
INSERT INTO Students VALUES (92, 'Ina', 'Flores', 60);
INSERT INTO Students VALUES (93, 'Ina', 'Green', 80);
INSERT INTO Students VALUES (94, 'Ina', 'Smith', 55);
INSERT INTO Students VALUES (95, 'Ina', 'Johnson', 45);
INSERT INTO Students VALUES (96, 'Ina', 'Williams', 28);
INSERT INTO Students VALUES (97, 'Ina', 'Brown', 64);
INSERT INTO Students VALUES (98, 'Ina', 'Jones', 45);
INSERT INTO Students VALUES (99, 'Ina', 'Garcia', 56);
INSERT INTO Students VALUES (100, 'Ina', 'Miller', 88);
INSERT INTO Students VALUES (101, 'Ina', 'Davis', 80);
INSERT INTO Students VALUES (102, 'Ina', 'Rodriguez', 53);
INSERT INTO Students VALUES (103, 'Ina', 'Martinez', 75);
INSERT INTO Students VALUES (104, 'Ina', 'Hernandez', 79);
INSERT INTO Students VALUES (105, 'Ina', 'Lopez', 40);
INSERT INTO Students VALUES (106, 'Ina', 'Wilson', 29);
INSERT INTO Students VALUES (107, 'Ina', 'Anderson', 29);
INSERT INTO Students VALUES (108, 'Ina', 'Thomas', 53);
INSERT INTO Students VALUES (109, 'Ina', 'Taylor', 44);
INSERT INTO Students VALUES (110, 'Joel', 'Scott', 59);
INSERT INTO Students VALUES (111, 'Joel', 'Torres', 63);
INSERT INTO Students VALUES (112, 'Joel', 'Nguyen', 75);
INSERT INTO Students VALUES (113, 'Joel', 'Hill', 42);
INSERT INTO Students VALUES (114, 'Joel', 'Flores', 56);
INSERT INTO Students VALUES (115, 'Joel', 'Green', 40);
INSERT INTO Students VALUES (116, 'Joel', 'Smith', 47);
INSERT INTO Students VALUES (117, 'Joel', 'Johnson', 21);
INSERT INTO Students VALUES (118, 'Joel', 'Williams', 83);
INSERT INTO Students VALUES (119, 'Joel', 'Brown', 81);
INSERT INTO Students VALUES (120, 'Joel', 'Jones', 45);
INSERT INTO Students VALUES (121, 'Joel', 'Garcia', 40);
INSERT INTO Students VALUES (122, 'Joel', 'Miller', 64);
INSERT INTO Students VALUES (123, 'Joel', 'Davis', 38);
INSERT INTO Students VALUES (124, 'Joel', 'Rodriguez', 25);
INSERT INTO Students VALUES (125, 'Joel', 'Martinez', 19);
INSERT INTO Students VALUES (126, 'Joel', 'Hernandez', 70);
INSERT INTO Students VALUES (127, 'Joel', 'Lopez', 25);
INSERT INTO Students VALUES (128, 'Joel', 'Wilson', 37);
INSERT INTO Students VALUES (129, 'Joel', 'Anderson', 45);
INSERT INTO Students VALUES (130, 'Joel', 'Thomas', 24);
INSERT INTO Students VALUES (131, 'Joel', 'Taylor', 64);
INSERT INTO Students VALUES (132, 'Katy', 'Scott', 58);
INSERT INTO Students VALUES (133, 'Katy', 'Torres', 36);
INSERT INTO Students VALUES (134, 'Katy', 'Nguyen', 85);
INSERT INTO Students VALUES (135, 'Katy', 'Hill', 86);
INSERT INTO Students VALUES (136, 'Katy', 'Flores', 42);
INSERT INTO Students VALUES (137, 'Katy', 'Green', 38);
INSERT INTO Students VALUES (138, 'Katy', 'Smith', 48);
INSERT INTO Students VALUES (139, 'Katy', 'Johnson', 27);
INSERT INTO Students VALUES (140, 'Katy', 'Williams', 87);
INSERT INTO Students VALUES (141, 'Katy', 'Brown', 39);
INSERT INTO Students VALUES (142, 'Katy', 'Jones', 81);
INSERT INTO Students VALUES (143, 'Katy', 'Garcia', 30);
INSERT INTO Students VALUES (144, 'Katy', 'Miller', 23);
INSERT INTO Students VALUES (145, 'Katy', 'Davis', 46);
INSERT INTO Students VALUES (146, 'Katy', 'Rodriguez', 72);
INSERT INTO Students VALUES (147, 'Katy', 'Martinez', 25);
INSERT INTO Students VALUES (148, 'Katy', 'Hernandez', 43);
INSERT INTO Students VALUES (149, 'Katy', 'Lopez', 23);
INSERT INTO Students VALUES (150, 'Katy', 'Wilson', 61);
INSERT INTO Students VALUES (151, 'Katy', 'Anderson', 79);
INSERT INTO Students VALUES (152, 'Katy', 'Thomas', 56);
INSERT INTO Students VALUES (153, 'Katy', 'Taylor', 29);
INSERT INTO Students VALUES (154, 'Liam', 'Scott', 32);
INSERT INTO Students VALUES (155, 'Liam', 'Torres', 20);
INSERT INTO Students VALUES (156, 'Liam', 'Nguyen', 35);
INSERT INTO Students VALUES (157, 'Liam', 'Hill', 88);
INSERT INTO Students VALUES (158, 'Liam', 'Flores', 19);
INSERT INTO Students VALUES (159, 'Liam', 'Green', 39);
INSERT INTO Students VALUES (160, 'Liam', 'Smith', 75);
INSERT INTO Students VALUES (161, 'Liam', 'Johnson', 61);
INSERT INTO Students VALUES (162, 'Liam', 'Williams', 25);
INSERT INTO Students VALUES (163, 'Liam', 'Brown', 24);
INSERT INTO Students VALUES (164, 'Liam', 'Jones', 21);
INSERT INTO Students VALUES (165, 'Liam', 'Garcia', 86);
INSERT INTO Students VALUES (166, 'Liam', 'Miller', 62);
INSERT INTO Students VALUES (167, 'Liam', 'Davis', 28);
INSERT INTO Students VALUES (168, 'Liam', 'Rodriguez', 46);
INSERT INTO Students VALUES (169, 'Liam', 'Martinez', 61);
INSERT INTO Students VALUES (170, 'Liam', 'Hernandez', 44);
INSERT INTO Students VALUES (171, 'Liam', 'Lopez', 34);
INSERT INTO Students VALUES (172, 'Liam', 'Wilson', 72);
INSERT INTO Students VALUES (173, 'Liam', 'Anderson', 69);
INSERT INTO Students VALUES (174, 'Liam', 'Thomas', 70);
INSERT INTO Students VALUES (175, 'Liam', 'Taylor', 52);
INSERT INTO Students VALUES (176, 'Mona', 'Scott', 81);
INSERT INTO Students VALUES (177, 'Mona', 'Torres', 71);
INSERT INTO Students VALUES (178, 'Mona', 'Nguyen', 33);
INSERT INTO Students VALUES (179, 'Mona', 'Hill', 29);
INSERT INTO Students VALUES (180, 'Mona', 'Flores', 76);
INSERT INTO Students VALUES (181, 'Mona', 'Green', 87);
INSERT INTO Students VALUES (182, 'Mona', 'Smith', 64);
INSERT INTO Students VALUES (183, 'Mona', 'Johnson', 61);
INSERT INTO Students VALUES (184, 'Mona', 'Williams', 36);
INSERT INTO Students VALUES (185, 'Mona', 'Brown', 23);
INSERT INTO Students VALUES (186, 'Mona', 'Jones', 88);
INSERT INTO Students VALUES (187, 'Mona', 'Garcia', 54);
INSERT INTO Students VALUES (188, 'Mona', 'Miller', 36);
INSERT INTO Students VALUES (189, 'Mona', 'Davis', 85);
INSERT INTO Students VALUES (190, 'Mona', 'Rodriguez', 80);
INSERT INTO Students VALUES (191, 'Mona', 'Martinez', 80);
INSERT INTO Students VALUES (192, 'Mona', 'Hernandez', 56);
INSERT INTO Students VALUES (193, 'Mona', 'Lopez', 66);
INSERT INTO Students VALUES (194, 'Mona', 'Wilson', 74);
INSERT INTO Students VALUES (195, 'Mona', 'Anderson', 38);
INSERT INTO Students VALUES (196, 'Mona', 'Thomas', 66);
INSERT INTO Students VALUES (197, 'Mona', 'Taylor', 70);
INSERT INTO Students VALUES (198, 'Ned', 'Scott', 20);
INSERT INTO Students VALUES (199, 'Ned', 'Torres', 47);
INSERT INTO Students VALUES (200, 'Ned', 'Nguyen', 53);
INSERT INTO Students VALUES (201, 'Ned', 'Hill', 31);
INSERT INTO Students VALUES (202, 'Ned', 'Flores', 31);
INSERT INTO Students VALUES (203, 'Ned', 'Green', 49);
INSERT INTO Students VALUES (204, 'Ned', 'Smith', 26);
INSERT INTO Students VALUES (205, 'Ned', 'Johnson', 64);
INSERT INTO Students VALUES (206, 'Ned', 'Williams', 56);
INSERT INTO Students VALUES (207, 'Ned', 'Brown', 19);
INSERT INTO Students VALUES (208, 'Ned', 'Jones', 89);
INSERT INTO Students VALUES (209, 'Ned', 'Garcia', 53);
INSERT INTO Students VALUES (210, 'Ned', 'Miller', 61);
INSERT INTO Students VALUES (211, 'Ned', 'Davis', 31);
INSERT INTO Students VALUES (212, 'Ned', 'Rodriguez', 80);
INSERT INTO Students VALUES (213, 'Ned', 'Martinez', 25);
INSERT INTO Students VALUES (214, 'Ned', 'Hernandez', 87);
INSERT INTO Students VALUES (215, 'Ned', 'Lopez', 50);
INSERT INTO Students VALUES (216, 'Ned', 'Wilson', 25);
INSERT INTO Students VALUES (217, 'Ned', 'Anderson', 64);
INSERT INTO Students VALUES (218, 'Ned', 'Thomas', 22);
INSERT INTO Students VALUES (219, 'Ned', 'Taylor', 29);
INSERT INTO Students VALUES (220, 'Olive', 'Scott', 60);
INSERT INTO Students VALUES (221, 'Olive', 'Torres', 87);
INSERT INTO Students VALUES (222, 'Olive', 'Nguyen', 60);
INSERT INTO Students VALUES (223, 'Olive', 'Hill', 26);
INSERT INTO Students VALUES (224, 'Olive', 'Flores', 88);
INSERT INTO Students VALUES (225, 'Olive', 'Green', 60);
INSERT INTO Students VALUES (226, 'Olive', 'Smith', 67);
INSERT INTO Students VALUES (227, 'Olive', 'Johnson', 47);
INSERT INTO Students VALUES (228, 'Olive', 'Williams', 75);
INSERT INTO Students VALUES (229, 'Olive', 'Brown', 34);
INSERT INTO Students VALUES (230, 'Olive', 'Jones', 29);
INSERT INTO Students VALUES (231, 'Olive', 'Garcia', 61);
INSERT INTO Students VALUES (232, 'Olive', 'Miller', 44);
INSERT INTO Students VALUES (233, 'Olive', 'Davis', 62);
INSERT INTO Students VALUES (234, 'Olive', 'Rodriguez', 60);
INSERT INTO Students VALUES (235, 'Olive', 'Martinez', 66);
INSERT INTO Students VALUES (236, 'Olive', 'Hernandez', 67);
INSERT INTO Students VALUES (237, 'Olive', 'Lopez', 37);
INSERT INTO Students VALUES (238, 'Olive', 'Wilson', 35);
INSERT INTO Students VALUES (239, 'Olive', 'Anderson', 42);
INSERT INTO Students VALUES (240, 'Olive', 'Thomas', 56);
INSERT INTO Students VALUES (241, 'Olive', 'Taylor', 28);
INSERT INTO Students VALUES (242, 'Pete', 'Scott', 20);
INSERT INTO Students VALUES (243, 'Pete', 'Torres', 40);
INSERT INTO Students VALUES (244, 'Pete', 'Nguyen', 70);
INSERT INTO Students VALUES (245, 'Pete', 'Hill', 21);
INSERT INTO Students VALUES (246, 'Pete', 'Flores', 31);
INSERT INTO Students VALUES (247, 'Pete', 'Green', 54);
INSERT INTO Students VALUES (248, 'Pete', 'Smith', 88);
INSERT INTO Students VALUES (249, 'Pete', 'Johnson', 28);
INSERT INTO Students VALUES (250, 'Pete', 'Williams', 64);
INSERT INTO Students VALUES (251, 'Pete', 'Brown', 51);
INSERT INTO Students VALUES (252, 'Pete', 'Jones', 25);
INSERT INTO Students VALUES (253, 'Pete', 'Garcia', 36);
INSERT INTO Students VALUES (254, 'Pete', 'Miller', 34);

SELECT * FROM Students;

CREATE TABLE TABLE0 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE1 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE2 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE3 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE4 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE5 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE6 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE7 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE8 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE9 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE10 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE11 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE12 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE13 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE14 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE15 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE16 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE17 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE18 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE19 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE20 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE21 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE22 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE23 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE24 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE25 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE26 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE27 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE28 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE29 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE30 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE31 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE32 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE33 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE34 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE35 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE36 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE37 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE38 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE39 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE40 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE41 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE42 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE43 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE44 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE45 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE46 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE47 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE48 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE49 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE50 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE51 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE52 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE53 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE54 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE55 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE56 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE57 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE58 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE59 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE60 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE61 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE62 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE63 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE64 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE65 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE66 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE67 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE68 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE69 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE70 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE71 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE72 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE73 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE74 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE75 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE76 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE77 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE78 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE79 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE80 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE81 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE82 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE83 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE84 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE85 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE86 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE87 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE88 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE89 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE90 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE91 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE92 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE93 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE94 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE95 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE96 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE97 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE98 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE99 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE100 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE101 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE102 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE103 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE104 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE105 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE106 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE107 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE108 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE109 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE110 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE111 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE112 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE113 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE114 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE115 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE116 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE117 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE118 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE119 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE120 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE121 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE122 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE123 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE124 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE125 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE126 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE127 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE128 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE129 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE130 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE131 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE132 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE133 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE134 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE135 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE136 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE137 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE138 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE139 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE140 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE141 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE142 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE143 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE144 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE145 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE146 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE147 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE148 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE149 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE150 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE151 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE152 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE153 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE154 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE155 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE156 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE157 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE158 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE159 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE160 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE161 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE162 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE163 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE164 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE165 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE166 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE167 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE168 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE169 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE170 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE171 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE172 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE173 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE174 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE175 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE176 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE177 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE178 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE179 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE180 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE181 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE182 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE183 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE184 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE185 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE186 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE187 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE188 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE189 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE190 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE191 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE192 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE193 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE194 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE195 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE196 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE197 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE198 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE199 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE200 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE201 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE202 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE203 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE204 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE205 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE206 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE207 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE208 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE209 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE210 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE211 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE212 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE213 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE214 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE215 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE216 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE217 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE218 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE219 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE220 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE221 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE222 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE223 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE224 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE225 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE226 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE227 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE228 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE229 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE230 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE231 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE232 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE233 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE234 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE235 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE236 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE237 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE238 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE239 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE240 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE241 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE242 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE243 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE244 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE245 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE246 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE247 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE248 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE249 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE250 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE251 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE252 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

CREATE TABLE TABLE253 (
    COLUMN1 INTEGER,
    COLUMN2 TEXT
);

INSERT INTO TABLE252 VALUES (1, 'A');

SELECT * FROM TABLE252;)";

    testcases[2] = R"(CREATE DATABASE test_university_2;
USE DATABASE test_university_2;
CREATE TABLE student (
    ID INTEGER,
    Name TEXT,
    GPA FLOAT,
    Major TEXT
);
INSERT INTO student VALUES (1, 'Alice Johnson', 3.5, 'Computer Science');
INSERT INTO student VALUES (2, 'Bob Smith', 3.6, 'Electrical Engineering');
INSERT INTO student VALUES (3, 'Catherine Lee', 3.9, 'Mathematics');
INSERT INTO student VALUES (4, 'Dave Brown', 3.2, 'Physics');
INSERT INTO student VALUES (5, 'Eva White', 3.8, 'Chemistry');
SELECT * FROM student;
UPDATE student SET GPA = GPA + 0.2 WHERE Name = 'Alice Johnson';
SELECT * FROM student WHERE Name = 'Alice Johnson';)";

    testcases[3] = R"(USE DATABASE test_university_2;
INSERT INTO student VALUES (6, 'Elle Flores', 0.2, 'Physics');
INSERT INTO student VALUES (7, 'Ina Rodriguez', 3.5, 'Chemistry');
SELECT * FROM student;
UPDATE student SET GPA = GPA - 0.1 WHERE Name = 'Elle Flores';
SELECT * FROM student WHERE Name = 'Elle Flores';)";

    testcases[4] = R"(CREATE DATABASE CompanyDB_4;
USE DATABASE CompanyDB_4;
CREATE TABLE Employees (
    EmployeeID INTEGER,
    FirstName TEXT,
    LastName TEXT,
    DepartmentID INTEGER,
    Age INTEGER
);

CREATE TABLE Departments (
    DepartmentID INTEGER,
    DepartmentName TEXT
);

INSERT INTO Departments VALUES (1, 'Human Resources');
INSERT INTO Departments VALUES (2, 'IT');
INSERT INTO Departments VALUES (3, 'Accounting');

INSERT INTO Employees VALUES (1, 'John', 'Doe', 1, 24);
INSERT INTO Employees VALUES (2, 'Jane', 'Doe', 2, 35);
INSERT INTO Employees VALUES (3, 'Jim', 'Beam', 3, 23);
INSERT INTO Employees VALUES (4, 'Jim', 'Doe', 2, 56);
INSERT INTO Employees VALUES (5, 'Jim', 'Eve', 2, 57);

SELECT * FROM Employees WHERE DepartmentID = 2;

UPDATE Employees SET DepartmentID = 3 WHERE EmployeeID = 2;

SELECT * FROM Employees;
SELECT * FROM Employees WHERE DepartmentID = 3 OR FirstName != 'John';
SELECT * FROM Employees WHERE EmployeeID > 3 AND FirstName = 'Jim';

SELECT Employees.FirstName, Employees.LastName, Departments.DepartmentName
FROM Employees
INNER JOIN Departments
ON Employees.DepartmentID = Departments.DepartmentID;)";

    testcases[5] = R"(USE DATABASE CompanyDB_4;

SELECT Employees.FirstName, Employees.LastName, Employees.Age, Departments.DepartmentName
FROM Employees
INNER JOIN Departments
ON Employees.DepartmentID = Departments.DepartmentID;

INSERT INTO Employees VALUES (6, 'Kim', 'Brown', 1, 29);
INSERT INTO Employees VALUES (7, 'Eve', 'Jax', 2, 40);

SELECT * FROM Employees WHERE DepartmentID = 1 OR DepartmentID = 3;

UPDATE Employees SET DepartmentID = 1 WHERE DepartmentID = 3;

SELECT Employees.FirstName, Employees.LastName, Employees.Age, Departments.DepartmentName
FROM Employees
INNER JOIN Departments
ON Employees.DepartmentID = Departments.DepartmentID;

SELECT * FROM Employees WHERE Age > 34 AND DepartmentID = 2;

DELETE FROM Employees WHERE Age > 34 AND DepartmentID = 2;

SELECT Employees.FirstName, Employees.LastName, Employees.Age, Departments.DepartmentName
FROM Employees
INNER JOIN Departments
ON Employees.DepartmentID = Departments.DepartmentID;
)";

    testcases[6] = R"(CREATE DATABASE CompanyDB_6;
USE DATABASE CompanyDB_6;

CREATE TABLE employees (
    id INTEGER,
    name TEXT,
    age INTEGER,
    department_id INTEGER
);

CREATE TABLE departments (
    department_id INTEGER,
    department_name TEXT
);

INSERT INTO employees VALUES (1, 'John Doe', 30, 101);
INSERT INTO employees VALUES (2, 'Jane Smith', 25, 102);
INSERT INTO employees VALUES (3, 'Alice Johnson', 28, 103);

INSERT INTO departments VALUES (101, 'Human Resources');
INSERT INTO departments VALUES (102, 'Finance');
INSERT INTO departments  VALUES (103, 'IT');

SELECT * FROM employees;

SELECT * FROM employees WHERE age > 26;

UPDATE employees SET department_id = 102 WHERE id = 1;

SELECT * FROM employees WHERE age > 26 AND department_id = 103;
SELECT * FROM employees WHERE age > 26 OR department_id = 102;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
WHERE employees.age > 25 AND departments.department_name = 'IT';)";


    testcases[7] = R"(USE DATABASE CompanyDB_6;

INSERT INTO employees VALUES (4, 'Mike Brown', 32, 101);
INSERT INTO employees VALUES (5, 'Lisa Ray', 27, 102);

INSERT INTO departments VALUES (104, 'Marketing');

SELECT * FROM employees;

SELECT * FROM employees WHERE age > 26;

UPDATE employees SET department_id = 104 WHERE id = 2;

SELECT * FROM employees WHERE age > 26 AND department_id = 103;
SELECT * FROM employees WHERE age > 26 OR department_id = 104;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
WHERE employees.age > 25 AND departments.department_name = 'IT';

SELECT employees.name, employees.age, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
WHERE departments.department_name = 'Finance' OR employees.age > 25;

UPDATE employees SET age = age + 1 WHERE department_id = 101 OR department_id = 102;

DELETE FROM departments WHERE department_id = 104;

SELECT * FROM departments;)";

    testcases[8] = R"(
CREATE DATABASE companyDB_8;

USE DATABASE companyDB_8;

CREATE TABLE employees (
    id INTEGER,
    name TEXT,
    age INTEGER,
    department_id INTEGER
);

CREATE TABLE departments (
    department_id INTEGER,
    department_name TEXT
);

CREATE TABLE projects (
    project_id INTEGER,
    project_name TEXT,
    lead_id INTEGER
);

INSERT INTO employees VALUES (1, 'John Smith', 30, 1);
INSERT INTO employees VALUES (2, 'Jane Doe', 25, 2);
INSERT INTO employees VALUES (3, 'Alice Johnson', 28, 3);

INSERT INTO departments VALUES (1, 'Human Resources');
INSERT INTO departments VALUES (2, 'Finance');
INSERT INTO departments VALUES (3, 'IT');

INSERT INTO projects VALUES (101, 'Project Alpha', 1);
INSERT INTO projects VALUES (102, 'Project Beta', 2);
INSERT INTO projects VALUES (103, 'Project Gamma', 3);

SELECT * FROM employees;

SELECT * FROM employees WHERE age > 26;

UPDATE employees SET department_id = 2 WHERE id = 1;

SELECT * FROM employees WHERE age > 25 AND department_id = 2;
SELECT * FROM employees WHERE age > 25 OR department_id = 3;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;

SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
WHERE employees.age > 25 AND departments.department_name = 'IT';

SELECT employees.name, departments.department_name, projects.project_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
INNER JOIN projects ON employees.id = projects.lead_id;)";

    testcases[9] = R"(CREATE DATABASE libraryDB_9;

USE DATABASE libraryDB_9;

CREATE TABLE books (
    book_id INTEGER,
    title TEXT,
    author_id INTEGER,
    is_available INTEGER
);

CREATE TABLE authors (
    author_id INTEGER,
    author_name TEXT
);

CREATE TABLE loans (
    loan_id INTEGER,
    book_id INTEGER,
    loan_date TEXT,
    return_date TEXT,
    is_returned INTEGER
);

INSERT INTO authors VALUES (1, 'George Orwell');
INSERT INTO authors VALUES (2, 'Virginia Woolf');
INSERT INTO authors VALUES (3, 'James Joyce');

INSERT INTO books VALUES (101, '1984', 1, 1);
INSERT INTO books VALUES (102, 'Mrs Dalloway', 2, 1);
INSERT INTO books VALUES (103, 'Ulysses', 3, 0);

INSERT INTO loans VALUES (201, 103, '2024-01-01', '2024-01-15', 0);
INSERT INTO loans VALUES (202, 101, '2024-01-02', '2024-01-20', 0);
INSERT INTO loans VALUES (203, 102, '2024-01-21', '2024-01-22', 1);
INSERT INTO loans VALUES (202, 102, '2024-01-23', '2024-01-25', 0);

SELECT * FROM books;

SELECT * FROM books WHERE is_available = 1;

UPDATE books SET is_available = 0 WHERE book_id = 102;

SELECT books.title, authors.author_name FROM books
INNER JOIN authors ON books.author_id = authors.author_id
WHERE books.is_available = 1 AND authors.author_name = 'Virginia Woolf';

SELECT books.title, authors.author_name
FROM books
INNER JOIN authors ON books.author_id = authors.author_id;

SELECT books.title, loans.loan_date, loans.return_date
FROM books
INNER JOIN loans ON books.book_id = loans.book_id
WHERE loans.is_returned = 0 AND (loans.return_date = '2024-01-15' OR loans.return_date = '2024-01-25');)";


}


#endif //TESTCASES_H
