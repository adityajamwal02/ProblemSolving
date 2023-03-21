/*
Write a program in C++ that opens two files as FILE1.txt and FILE2.txt. It is assumed both files are having
some lines of text. WAP to read line1 from FILE1, sort the words of the line1 and write it into FILE3 then
read line 1 from FILE2 , sort the words of the line1 and write it into FILE3. This process will continue till end
of either of the file. On reaching EOF in any of the two files, perform the above mentioned process with the
lines of the remaining file.
*/


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    std::ifstream file1("FILE1.txt");
    std::ifstream file2("FILE2.txt");
    std::ofstream file3("FILE3.txt");

    if (!file1.is_open() || !file2.is_open() || !file3.is_open()) {
        std::cerr << "Failed to open files" << std::endl;
        return 1;
    }

    std::string line1, line2;
    while (std::getline(file1, line1) && std::getline(file2, line2)) {
        // Sort the words in line1
        std::sort(line1.begin(), line1.end());

        // Sort the words in line2
        std::sort(line2.begin(), line2.end());

        // Write the sorted lines to file3
        file3 << line1 << std::endl;
        file3 << line2 << std::endl;
    }

    // Process remaining lines in file1, if any
    while (std::getline(file1, line1)) {
        // Sort the words in line1
        std::sort(line1.begin(), line1.end());

        // Write the sorted line to file3
        file3 << line1 << std::endl;
    }

    // Process remaining lines in file2, if any
    while (std::getline(file2, line2)) {
        // Sort the words in line2
        std::sort(line2.begin(), line2.end());

        // Write the sorted line to file3
        file3 << line2 << std::endl;
    }

    std::cout << "Lines sorted and written to FILE3.txt" << std::endl;

    return 0;
}
