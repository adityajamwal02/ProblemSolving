#include<bits/stdc++.h>
using namespace std;

typedef union Person{
    int age;
    char name[32];
};

int main(){

    union Person p;
    cin>>p.age;
    cin>>p.name;
    cout<<"\n The first value at the allocated memory : "<<p.age<<endl;
    cout<<"The next value at the allocated memory : "<<p.name<<endl;

    return 0;
}
