USE DATABASE test_university_2;
INSERT INTO student VALUES (6, 'Elle Flores', 0.2, 'Physics');
INSERT INTO student VALUES (7, 'Ina Rodriguez', 3.5, 'Chemistry');
SELECT * FROM student;
UPDATE student SET GPA = 1.0 WHERE Name = 'Elle Flores';
SELECT * FROM student WHERE Name = 'Elle Flores';