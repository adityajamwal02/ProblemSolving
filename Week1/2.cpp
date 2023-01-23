#include<bits/stdc++.h>
using namespace std;

struct Customer{
    int id;
    string name;
    float salary;

    void input(){
        cout<<"Enter Account No. : ";
        cin>>id; cin.ignore( 1000, '\n' );
        cout<<"Enter Customer Name: ";
        getline(cin,name);
        cout<<"Enter Balance:  ";
        cin>>salary;
    }

    bool check(){
        if(salary<100){
            return true;
        }
    return false;
    }
};

int main(){
    int n;
    cout<<"Enter number of Customer you want to add: "<<endl;
    cin>>n;
    vector<Customer> e(n);
    for(int i=0;i<n;i++){
        e[i].input();
    }
    cout<<endl;
    for(int i=0;i<e.size();i++){
        if(e[i].check())
            cout<<e[i].id<<"  "<<e[i].name<<endl;
    }
    return 0;
}

