#include<bits/stdc++.h>
using namespace std;

struct Books{
    int id;
    string name;
    string author;
    float price;

    void input(){
        cout<<"Enter Book Id. : ";
        cin>>id; cin.ignore(1000, '\n' );
        cout<<"Enter Book Name: ";
        getline(cin,name);
        cout<<"Enter Book Author: ";
        getline(cin,author);
        cout<<"Enter Price:  ";
        cin>>price;
    }

    void display(){
        cout<<id<<"  "<<name<<"  "<<author<<"  "<<price<<endl;
    }

};

int main(){
    cout<<" Welcome to Library"<<endl;
    cout<<" (a) Add Book Details \n (b) Display Book Details \n (c) List all books of a given author \n (d) List the count of books in the library \n (e) Exit";
    char ch;
    int i=0;
    bool flag=true;
    vector<Books> e;
    while(flag){
        cout<<"\n Choose your options "<<endl;
        cin>>ch;
        if(ch=='a'){
            e[i].input();
        }else if(ch=='b'){
             for(int i=0;i<e.size();i++){
                e[i].display();
            }
        }else if(ch=='c'){
            string input_author;
            getline(cin, input_author);
            for(int i=0;i<e.size();i++){
                if(e[i].author==input_author){
                    cout<<e[i].name<<" "<<e[i].price<<endl;
                }
            }
        }else if(ch=='d'){
            cout<<"Total Books in Library: "<<e.size()<<endl;
        }else{
            flag=false;
        }
    }
   cout<<endl<<"Thank you!";

    return 0;
}
