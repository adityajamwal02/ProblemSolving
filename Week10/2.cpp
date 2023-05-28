/*
Create a map named Students whose keys will be integers and values strings. Insert values into the map Students. A key of 200 and a value of Alice will be
inserted into the map. Insert values into the map Students. A key of 201 and a value of John will be inserted into the map. You can use the find() function to search for
elements in a map by their keys. If the key isn't found, the function returns std::map::end. Otherwise, an iterator of the searched element will be returned. Look
for the value associated with a key of 201. Use an if statement to check whether the value for the key is found. Print the value of the key alongside some text on the
console.
*/

#include <iostream>
#include <map>
#include <string>
int main() {
std::map<int, std::string> Students;
// Insert values into the map
Students.insert(std::make_pair(200, "Alice"));
Students.insert(std::make_pair(201, "John"));
// Search for the value associated with a key of 201
auto it = Students.find(201);
// Check if the value is found
if (it != Students.end()) {
// Print the value associated with the key
std::cout << "Value for key 201: " << it->second << std::endl;
} else {
std::cout << "Key 201 not found in the map" << std::endl;
}
return 0;
}
