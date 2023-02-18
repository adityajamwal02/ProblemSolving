#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string pattern("[_a-zA-Z]+\\.[_a-zA-Z0-9]+");
  std::regex regex(pattern);
  
  std::string test_string;
  std::cout << "Enter a string to test: ";
  std::getline(std::cin, test_string);
  
  if (std::regex_match(test_string, regex)) {
    std::cout << "The string matches the pattern." << std::endl;
  } else {
    std::cout << "The string does not match the pattern." << std::endl;
  }
  
  return 0;
}

