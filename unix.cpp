#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <memory>
#include <vector>
#include <utility>
#include <map>

#include "testcases.h"
#include "references.h"

void createTestFiles() {
    // create a directory for the test files
    system("mkdir -p TestFiles");

    initTestCases();

    // create test files
    std::ofstream file;
    for (size_t i = 0; i < testcases.size(); i++) {
        file.open("TestFiles/test" + std::to_string(i) + ".sql");
        file << testcases[i];
        file.close();
    }

    initRefs();

    // create ref files
    for (size_t i = 0; i < testcases.size(); i++) {
        parseRefs(refs[i]);
    }
}

void exec(const std::string& arg0, const std::string& arg1, const std::string& arg2) {
    // 构建命令字符串
    const std::string command = arg0 + " " + arg1 + " " + arg2;

    // 使用 system 函数执行命令
    const int result = system(command.c_str());

    // 检查命令执行结果
    if (result == -1) {
        std::cerr << "command exec fail" << std::endl;
    }

    std::cout << "command exec success" << std::endl;
}

std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return content;
}

bool compareOutputWithFile(const size_t index, const std::string& outputFile) {
    const std::string output = readFile(outputFile);

    Res out;
    out.str = output;

    parseOut(out);

    for (size_t i = 0; i < refs[index].sentences.size(); i++) {
        Res::Sentence matchedResSentence;
        matchedResSentence.title = refs[index].sentences[i].title;
        Res::Sentence curRefSentence = refs[index].sentences[i];
        Res::Sentence curOutSentence;

        if (out.sentences.size() <= i) {
            std::cerr << "\033[1;31m" << "Test case " << index << " Output " << i << " failed!" << "\033[0m" << std::endl;
            std::cerr << "\033[1;31m" << "Output has less sentences than expected!" << "\033[0m" << std::endl;
        
            return false;
        } else {
            curOutSentence = out.sentences[i];
        }

        if (refs[index].sentences[i].title != out.sentences[i].title) {
            std::cerr << "\033[1;31m" << "Test case " << index << " Output " << i << " failed!" << "\033[0m" << std::endl;
            std::cerr << "\033[1;31m" << "Title mismatch!" << "\033[0m" << std::endl;
            std::cerr << "\033[1;32m" << "Expected: " << refs[index].sentences[i].title.toString() << "\033[0m" << std::endl;
            std::cerr << "\033[1;31m" << "Got: " << out.sentences[i].title.toString() << "\033[0m" << std::endl;
            return false;
        }

        for (size_t j = 0; j < refs[index].sentences[i].lines.size();) {
            // check if sentence in ref matches with the output
            // if match, remove the sentence from the output and ref
            bool found = false;

            for (size_t k = 0;k < out.sentences[i].lines.size();k++) {
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

        if (!refs[index].sentences[i].lines.empty() || !out.sentences[i].lines.empty()) {
            std::cerr << "\033[1;31m" << "Test case " << index << " Output " << i << " failed!" << "\033[0m" << std::endl;
            
            for (auto& l : curRefSentence.lines) {
                std::cout << "\033[1;32m" << "Expected: " << l.toString() << "\033[0m" << std::endl;
            }

            for (auto& l : curOutSentence.lines) {
                std::cout << "\033[1;31m" << "Got: " << l.toString() << "\033[0m" << std::endl;
            }

            return false;
        } else {
            std::cout << "\033[1;32m" << "Test case " << index << " Output " << i << " passed!" << "\033[0m" << std::endl;

            std::cout << "\033[1;34m" << "Matched: " << matchedResSentence.title.toString() << "\033[0m" << std::endl;
            for (auto& l : matchedResSentence.lines) {
                std::cout << "\033[1;34m" << "Matched: " << l.toString() << "\033[0m" << std::endl;
            }
        }

        std::cout << std::endl;
    }

    if (refs[index].sentences.size() < out.sentences.size()) {
        std::cerr << "\033[1;31m" << "Test case " << index << " Output failed!" << "\033[0m" << std::endl;
        std::cerr << "\033[1;31m" << "Output has more sentences than expected!" << "\033[0m" << std::endl;
        return false;
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
        system("mkdir -p Outputs/");
        for (size_t i = 0; i < testcases.size(); i++) {
            exec(argv[1], "TestFiles/test" + std::to_string(i) + ".sql", "Outputs/output" + std::to_string(i) + ".txt");
        }

        std::cout << "****** Comparing output with reference ******" << std::endl;

        size_t failed = 0;

        // record the result of testcases
        std::map<std::string, std::pair<size_t, size_t>> res;

        res["Basic"] = std::make_pair(0, 2);
        res["Simple"] = std::make_pair(0, 2);
        res["Intermediate"] = std::make_pair(0, 2);
        res["Complex"] = std::make_pair(0, 2);
        res["Advanced"] = std::make_pair(0, 2);
        res["Precision"] = std::make_pair(0, 1);
        res["On-disk"] = std::make_pair(0, 1);

        for (size_t i = 0; i < testcases.size(); i++) {
            if (!compareOutputWithFile(i, "Outputs/output" + std::to_string(i) + ".txt")) {
                failed++;
            } else {
                switch (i) {
                    case 0:
                    case 1:
                        res["Basic"].first++;
                        break;
                    case 2:
                    case 3:
                        res["Simple"].first++;
                        break;
                    case 4:
                    case 5:
                        res["Intermediate"].first++;
                        break;
                    case 6:
                    case 7:
                        res["Complex"].first++;
                        break;
                    case 8:
                    case 9:
                        res["Advanced"].first++;
                        break;
                    case 10:
                        res["Precision"].first++;
                        break;
                    case 11:
                        res["On-disk"].first++;
                        break;
                    default:
                        break;
                }
            }

            std::cout << std::endl;
        }

        if (failed == 0) {
            std::cout << "\033[1;34m" << "All test cases passed!" << "\033[0m" << std::endl;
        } else {
            std::cerr << "\033[1;31m" << "Total Passed: " << testcases.size() - failed << "/" << testcases.size() << "\033[0m" << std::endl;
        }

        auto printRes = [](const std::string& name, const std::pair<size_t, size_t>& r) {
            std::cerr << "\033[1;32m" << name << " Passed: " << r.first << "/" << r.second << "\033[0m" << std::endl;
        };

        printRes("Basic", res["Basic"]);
        printRes("Simple", res["Simple"]);
        printRes("Intermediate", res["Intermediate"]);
        printRes("Complex", res["Complex"]);
        printRes("Advanced", res["Advanced"]);
        printRes("Precision", res["Precision"]);
        printRes("On-disk", res["On-disk"]);

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}