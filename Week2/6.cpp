#include<bits/stdc++.h>
using namespace std;

class ZooAnimal{
    string name;
    int cageNumber;
    int weightDate;
    int weight;

public:
     ZooAnimal()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter cage number: ";
        cin >> cageNumber;
        cout << "Enter weight Date: ";
        cin >> weightDate;
        cout << "Enter weight: ";
        cin >> weight;
    }
    void display()
    {
        cout << endl << name << "\t" << cageNumber << "\t" << weightDate << "\t" << weight;
    }
};

int main(){

    ZooAnimal z;
    z.display();
    return 0;
}
