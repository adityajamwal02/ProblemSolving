#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
string name;
int code;
double cost;
// Print header
cout << left << setw(20) << "Name" << setw(10) << "Code" << right << setw(10)
<< "Cost" << endl;
cout << setfill('-') << setw(40) << "" << setfill(' ') << endl;
// Read list of items
while (cin >> name >> code >> cost) {
// Print item
cout << left << setw(20) << name << setw(10) << code << right << fixed <<
setprecision(2) << setw(10) << cost << endl;
}

return 0;
}
