#include <iostream>
using namespace std;
template <class T>
void print(T value) {
cout << "Value: " << value << endl;
}
template <class T, class U>
void print(T first, U second) {
cout << "Pair: (" << first << ", " << second << ")" << endl;
}
int main() {
print(10);
print("Hello");
print(3.14);
print(10, 3.14);
print("Hello", true);
return 0;

}
