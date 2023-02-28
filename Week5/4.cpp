#include <iostream> 
#include <string> 
#include <regex> 
int main() { 
std::string input_expression = "20/10"; 
std::regex expression_regex("(\\d+)([\\+\\-\\*/])(\\d+)"); 
std::smatch expression_match; 
if (std::regex_search(input_expression, expression_match, expression_regex)) { int operand1 = std::stoi(expression_match[1]); 
int operand2 = std::stoi(expression_match[3]); 
char op = expression_match[2].str()[0]; 
int result = 0;
switch (op) { 
case '+': 
result = operand1 + operand2; 
break; 
case '-': 
result = operand1 - operand2; 
break; 
case '*': 
result = operand1 * operand2; 
break; 
case '/': 
result = operand1 / operand2; 
break; 
default: 
std::cout << "Invalid operator" << std::endl; return 1; 
}
std::cout << operand1 << " " << op << " " << operand2 << " = " << result << std::endl; } else { 
std::cout << "Invalid expression" << std::endl; 
return 1; 
} 
return 0; 
}
