#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class Book {
public:
string name;
int code;
double cost;
Book(string n, int c, double co) {
name = n;
code = c;
cost = co;
}
};

void write_to_file(vector<Book>& books, string filename) {
ofstream outfile(filename);
for (int i = 0; i < books.size(); i++) {
outfile << books[i].name << " " << books[i].code << " " << books[i].cost <<
endl;
}
outfile.close();
}
void read_from_file(vector<Book>& books, string filename) {
ifstream infile(filename);
string name;
int code;
double cost;
while (infile >> name >> code >> cost) {
books.push_back(Book(name, code, cost));
}
infile.close();
}
int find_book(vector<Book>& books, int code) {
for (int i = 0; i < books.size(); i++) {
if (books[i].code == code) {
return i;
}
}
return -1;
}
void display_books(vector<Book>& books) {
cout << "Name Code Cost" << endl;
cout << "----------------------------------------" << endl;
for (int i = 0; i < books.size(); i++) {

cout << left << setw(20) << books[i].name << setw(10) << books[i].code <<
right << fixed << setprecision(2) << setw(10) << books[i].cost << endl;
}
}

void determine_cost(vector<Book>& books) {
int code;
cout << "Enter book code: ";
cin >> code;
int index = find_book(books, code);
if (index == -1) {
cout << "Book not found!" << endl;
} else {
cout << "Cost of " << books[index].name << " is " << books[index].cost <<
endl;
}
}
void update_cost(vector<Book>& books) {
int code;
cout << "Enter book code: ";
cin >> code;
int index = find_book(books, code);
if (index == -1) {
cout << "Book not found!" << endl;
} else {
double new_cost;
cout << "Enter new cost: ";
cin >> new_cost;
books[index].cost = new_cost;
cout << "Cost of " << books[index].name << " updated to " <<
books[index].cost << endl;
}

}

int main() {
vector<Book> books;
string filename = "books.txt";
read_from_file(books, filename);
int choice;
do {
cout << endl;
cout << "Menu:" << endl;
cout << "1. Display books" << endl;
cout << "2. Determine cost of a book" << endl;
cout << "3. Update cost of a book" << endl;
cout << "4. Exit" << endl;
cout << "Enter choice: ";
cin >> choice;
switch (choice) {
case 1:
display_books(books);
break;
case 2:
determine_cost(books);
break;
Case
