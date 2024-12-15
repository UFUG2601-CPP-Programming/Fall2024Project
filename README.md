# Fall2024Project

## Introduction

AutoTest is a program that automatically tests the minidb program. It will run the minidb program with a series of test cases and compare the output with the expected output.

![AutoTest Example](Figure/output.png)

### Test Cases
* For the functional test, there are five kinds of test cases: Basic, Simple, Intermediate,
Complex and Advanced, each with two test cases.  
* For the format test, there are two test cases in the 5_format folder. test10 is for the 2 decimals of
the float elements. And test11 is to test if users can save the database on the disk.

## Usage

### Windows

1. compile the AutoTest program and get an executable binary file *windows.exe*
```bash
g++ windows.cpp -o windows
```

2. run *windows.exe* with your minidb executable binary file
```bash
windows.exe C:\UFUG2601Project\minidb.exe
```

### Unix

1. compile the AutoTest program and get an executable binary file *unix*

```bash
g++ unix.cpp -o unix
```

2. run *unix* with your minidb executable binary file
```bash
./unix /mnt/UFUG2601Project/build/minidb
```

### Warning

* You need to delete the previous output of the minidb program before running the AutoTest program.
