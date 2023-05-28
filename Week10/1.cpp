/*
Create your own template class MyVector with data members and member functions such that the size(), push_back() and pop_back() functionalities of Vector
can also be performed by MyVector.
*/

#include <iostream>
template <typename T>
class MyVector {
private:
T* data;
size_t capacity;
size_t length;
public:
// Constructor
MyVector() : data(nullptr), capacity(0), length(0) {}
// Destructor
~MyVector() {
delete[] data;
}
// Size of the vector
size_t size() const {

return length;
}
// Push element to the back
void push_back(const T& element) {
if (length >= capacity) {
size_t newCapacity = (capacity == 0) ? 1 : 2 * capacity;
reserve(newCapacity);
}
data[length] = element;
length++;
}
// Pop element from the back
void pop_back() {
if (length > 0) {
length--;
}
}
private:
// Helper function to allocate memory
void reserve(size_t newCapacity) {
T* newData = new T[newCapacity];
for (size_t i = 0; i < length; i++) {
newData[i] = data[i];
}
delete[] data;
data = newData;
capacity = newCapacity;
}
};
int main() {
// Example usage of MyVector
MyVector<int> myVector;
myVector.push_back(10);

myVector.push_back(20);
myVector.push_back(30);
std::cout << "Size of myVector: " << myVector.size() << std::endl;
myVector.pop_back();
std::cout << "Size of myVector after pop_back(): " << myVector.size() << std::endl;
return 0;
}
