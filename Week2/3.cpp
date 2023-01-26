#include<bits/stdc++.h>
using namespace std;
int tripleByValue(int con){
    con = con*3;
    return con;
}

int tripleByReference(int &con){
    con = con*3;
    return con;
}


int main(){
    int con;
    cin>>con;
    cout<<tripleByValue(con)<<" "<<con<<endl;
    cout<<endl;
    cout<<tripleByReference(con);
    cout<<endl;
    cout<<con;

    return 0;
}

