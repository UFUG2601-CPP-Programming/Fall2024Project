# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Output directory
OUTDIR = bin

# Target executable
TARGET = AutoTest

# Source files
UNIX_SRC = unix.cpp
WINDOWS_SRC = windows.cpp

# Header files
HEADERS = testcases.h

# Default target
all: unix

# Unix target
unix: $(UNIX_SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(OUTDIR)/$(TARGET) $(UNIX_SRC)

# Windows target
windows: $(WINDOWS_SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(OUTDIR)/$(TARGET) $(WINDOWS_SRC)

# Clean target
clean:
	rm -rf $(OUTDIR)