#include<bits/stdc++.h> 
using namespace std; 

struct Employee{ 
  int id; 
  string name; 
  string des; 
  string dep; 
  float salary; 
  
  void input(){ 
      cout<<"Enter Employee Id: "; 
      cin>>id; cin.ignore( 1000, '\n' ); 
      cout<<"Enter Employee Name: "; 
      getline(cin,name); 
      cout<<"Enter Employee Designation: "; 
      getline(cin,des); 
      cout<<"Enter Employee Department: "; 
      getline(cin,dep); 
      cout<<"Enter Employee Salary: "; 
      cin>>salary; 
  } 
};

int main(){ 
    int n; 
    cout<<"Enter number of employees you want to add: "<<endl; 
    cin>>n; 
    vector<Employee> e(n); 
    for(int i=0;i<n;i++){
        e[i].input(); 
    } 
    cout<<endl<<" Database "<<endl; 
    for(int i=0;i<e.size();i++){ 
        cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].des<<" "<<e[i].dep<<" "<<e[i].salary<<endl; 
     } 
return 0; 
}
