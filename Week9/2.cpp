/*
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!)
He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100. The Monk is supposed to arrange the list 
in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.
Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students.
N lines follow, which contain a string and an integer, denoting the name of the student and
his marks.

Output format:
You must print the required list.
Constraints:
1 <= N <= 10
5

1 <= | Length of the name | <= 100
1 <= Marks <= 100
Sample input
3
Eve 78
Bob 99
Alice 78

Sample output
Bob 99
Alice 78
Eve 78
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Custom comparison function to sort students
bool compareStudents(const pair<string, int>& student1, const pair<string, int>& student2) {
// Sort by marks in decreasing order
if (student1.second != student2.second) {
return student1.second > student2.second;
}
// Sort by names lexicographically
return student1.first < student2.first;
}
int main() {
int N;
cin >> N;
vector<pair<string, int>> students;
for (int i = 0; i < N; i++) {
string name;
int marks;
cin >> name >> marks;
students.push_back(make_pair(name, marks));
}
// Sort the students based on custom comparison function

sort(students.begin(), students.end(), compareStudents);
// Print the sorted list of students
for (const auto& student : students) {
cout << student.first << " " << student.second << endl;
}
return 0;
}
