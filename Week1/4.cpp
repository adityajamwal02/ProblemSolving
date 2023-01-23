#include<bits/stdc++.h>
using namespace std;

struct Books{
    string title;
    string author;
    string publisher;
    float price;

    void input(){
        cout<<"Enter Book Title: ";
        cin>>title;
        cout<<"Enter Book author: ";
        cin>>author;
        cout<<"Enter Book Publisher: ";
        cin>>publisher;
        cout<<"Enter Book Price: ";
        cin>>price;
    }

    bool check(){
        if(price>=500){
            return true;
        }
    return false;
    }
};

int main(){
    int n;
    vector<Books> b(n);
    char ch;
    cout<<"Choose your option"<<endl;
    cout<<"(a) Enter Book Details \n(b) Books of specific Author \n(c) Books by Specific Publisher \n(d) Price Above 500 \n(e) Display All"<<endl;
    bool flag=true;
    while(flag){
        cin>>ch;
        if(ch=='a'){
        cout<<"Enter Count of Books You want to Enter: "<<endl;
        cin>>n;
        for(int i=1;i<=n;i++){
            b[i].input();
        }
    }else if(ch=='b'){
        string input_author;
        cout<<"Enter The Author you want: "<<endl;
        cin>>input_author;
        for(int i=1;i<=n;i++){
            if(b[i].author==input_author){
                cout<<b[i].title<<endl;
            }
        }
    }else if(ch=='c'){
        string input_pub;
        cout<<"Enter The Author you want: "<<endl;
        cin>>input_pub;
        for(int i=1;i<=n;i++){
            if(b[i].publisher==input_pub){
                cout<<b[i].title<<endl;
            }
        }
    }else if(ch=='d'){
        for(int i=1;i<=n;i++){
            if(b[i].check()){
                cout<<b[i].title<<" "<<b[i].price<<endl;
            }
        }
    }else if(ch=='e'){
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<b[i].title<<" "<<b[i].author<<" "<<b[i].publisher<<" "<<b[i].price<<endl;
        }
    }else{
        cout<<"Invalid Input "<<endl;
        flag=false;
        break;
        }
    }


    return 0;
}
