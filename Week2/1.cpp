#include<bits/stdc++.h>
using namespace std;

string insertString(string s, string t, int index){
    if(index>s.size()){
        return "0";
    }else{
        string temp="";
        for(int i=0;i<index;i++){
            temp+=s[i];
        }
        for(int i=0;i<t.size();i++){
            temp+=t[i];
        }
        for(int i=index;i<s.size();i++){
            temp+=s[i];
        }
    return temp;
    }
}

int main(){
    string s="Aditya";
    string t="Jam";
    int index=9;
    cout<<insertString(s,t,index)<<endl;

    return 0;
}
