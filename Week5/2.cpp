#include <iostream> 
#include <filesystem> 
#include <regex> 
namespace fs = std::filesystem; 
int main() { 
// Get the present working directory 
fs::path dir_path = fs::current_path(); 
// Regular expressions for the different search criteria 
std::regex docx_regex(".+\\.docx$"); 
std::regex start_alpha_regex("^[a-zA-Z].*");
std::regex start_ab_regex("^ab.*"); 
std::regex end_num_regex(".*\\d$"); 
// Iterate over the files in the directory and check for matches for (const auto& entry : fs::directory_iterator(dir_path)) { if (fs::is_regular_file(entry)) { 
std::string filename = entry.path().filename().string(); 
if (std::regex_match(filename, docx_regex)) { 
std::cout << filename << std::endl; 
} 
else if (std::regex_match(filename, start_alpha_regex)) { std::cout << filename << std::endl; 
} 
else if (std::regex_match(filename, start_ab_regex)) { std::cout << filename << std::endl; 
} 
else if (std::regex_match(filename, end_num_regex)) {
std::cout << filename << std::endl; 
} 
} 
} 
return 0; 
} 
