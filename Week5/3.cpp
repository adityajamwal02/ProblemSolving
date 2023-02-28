#include <iostream> 
#include <string> 
#include <regex> 
using namespace std; 
bool hasDuplicateA(const string& word) { 
int countA = 0; 
for (char c : word) { 
if (c == 'a' || c == 'A') { 
countA++; 
if (countA > 1) {
return true; 
} 
} 
} 
return false; 
} 
int main() { 
string input = "This is a demonstration paragraph with some words like application, action, and activation. The date mentioned in the paragraph is 02/14/2023."; 
regex re("\\b[a-zA-Z]*a[a-zA-Z]*a[a-zA-Z]*tion\\b"); 
string output = regex_replace(input, re, ""); 
regex dateRe("\\b\\d{1,2}/\\d{1,2}/\\d{4}\\b"); 
smatch match; 
if (regex_search(input, match, dateRe)) { 
string dateStr = match.str(); 
int month, day, year; 
sscanf(dateStr.c_str(), "%d/%d/%d", &month, &day, &year); 
string formattedDate = to_string(day) + "-" + to_string(month) + "-" + to_string(year); cout << "Formatted date: " << formattedDate << endl; 
} 
cout << output << endl; 
return 0; 
}
