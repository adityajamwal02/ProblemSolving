#include <iostream>
using namespace std;
template <class T>
class Pair {
private:
T first, second;
public:
Pair(T f, T s) {
first = f;
second = s;
}
T get_first() {
return first;
}
T get_second() {
return second;
}
};
int main() {
Pair<int> p1(10, 20);
Pair<double> p2(3.14, 2.71);
cout << "p1 = (" << p1.get_first() << ", " << p1.get_second() << ")" << endl;
cout << "p2 = (" << p2.get_first() << ", " << p2.get_second() << ")" << endl;
return 0;
}
