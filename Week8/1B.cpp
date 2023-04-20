#include <iostream>
using namespace std;
template <class T, class U>
class Pair {
private:
T first;
U second;
public:
Pair(T f, U s) {
first = f;
second = s;
}
T get_first() {
return first;
}
U get_second() {
return second;
}
};
int main() {
Pair<int, double> p1(10, 3.14);
Pair<string, bool> p2("Hello", true);
cout << "p1 = (" << p1.get_first() << ", " << p1.get_second() << ")" << endl;
cout << "p2 = (" << p2.get_first() << ", " << p2.get_second() << ")" << endl;
return 0;
}
