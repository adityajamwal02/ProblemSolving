#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
string pn; 
cout << "Enter phone number in format (AA)-BBB-CCCCCCCC: "; cin >> pn; 
string isd_code = pn.substr(0,2); 
string std_code = pn.substr(2,3); 
string subscriber_number = pn.substr(5,10); 
cout << "ISD code: " << isd_code << endl; 
cout << "STD code: " << std_code << endl; 
cout << "Subscriber number: " << subscriber_number << endl; 
return 0; 
}
