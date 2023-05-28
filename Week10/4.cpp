/*
WAP in C++ to convert regular function to functor (or function object).
*/

#include <iostream>
// Regular function
int add(int a, int b) {
return a + b;
}
// Functor or function object
struct AddFunctor {
int operator()(int a, int b) const {
return a + b;
}
};

int main() {
// Using the regular function
int result1 = add(2, 3);
std::cout << "Result using regular function: " << result1 << std::endl;
// Using the functor or function object
AddFunctor addFunctor;
int result2 = addFunctor(2, 3);
std::cout << "Result using functor or function object: " << result2 << std::endl;
return 0;
}
