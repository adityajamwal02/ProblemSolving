#include <iostream>
using namespace std;

template <class T, class U>
void print_pair(T first, U second) {
cout << "(" << first << ", " << second << ")" << endl;
}

int main() {
print_pair(10, 3.14);
print_pair("Hello", true);
return 0;
}
