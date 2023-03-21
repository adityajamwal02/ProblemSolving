/*
Write a program to demonstrate tokenizing a string using stringstream class and print the
frequencies of individual words in a string.
Input:
string s = "work while you work play while you play";
*/

#include <iostream>
#include <sstream>
#include <map>

int main() {
    std::string s = "work while you work play while you play";
    std::stringstream ss(s);
    std::string word;
    std::map<std::string, int> freq;

    // Tokenize the string and count the frequencies of individual words
    while (ss >> word) {
        freq[word]++;
    }

    // Print the frequencies of individual words
    std::cout << "Word frequencies:" << std::endl;
    for (const auto& pair : freq) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
