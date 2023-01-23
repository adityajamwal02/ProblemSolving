#include<bits/stdc++.h>
using namespace std;

struct Employee{
    int empid;
    string empname;
    float salary;


    void input(){
        cout<<"\n Enter Employee Id: ";
        cin>>empid; cin.ignore( 1000, '\n' );
        cout<<"\n Enter Employee empname: ";
        getline(cin,empname);
        cout<<"\n Enter Employee salary: ";
        cin>>salary;
    }

    void display(){
        cout<<empid<<"  "<<empname<<"  "<<salary<<endl;
    }


};

int main(){
    int n;
    cout<<"\n Enter The number of employees you want to enter: ";
    cin>>n;

    vector<Employee> e(n);

    // Input all Employees in the vector
    for(int i=0;i<n;i++){
        e[i].input();
    }

    char ch;
    cin>>ch;

    // Menu Driven Program
    if(ch=='a'){
        int searchid;
        cin>>searchid;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(e[i].empid==searchid){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"Present"<<endl;
        }else{
            cout<<"not in data"<<endl;
        }

    }else if(ch=='b'){
        for(int i=0;i<n;i++){
            e[i].display();
        }
    }else if(ch=='c'){
        for(int i=0;i<n;i++){
            if(e[i].salary>10000){
                cout<<e[i].empname<<endl;
            }
        }
    }


    return 0;
}
