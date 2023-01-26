#include<bits/stdc++.h>
using namespace std;

struct fraction{
    float numerator1, denominator1;
    float numerator2, denominator2;
    int check(float num1, float num2){
        if(num1==num2){
            return 0;
        }else if(num1<num2){
            return -1;
        }
    return 1;
    }

};

int main(){
    fraction f;
    cin>>f.numerator1>>f.denominator1;
    cin>>f.numerator2>>f.denominator2;
    float num1=f.numerator1/f.denominator1;
    float num2=f.numerator2/f.denominator2;
    cout<<f.check(num1,num2);

    return 0;
}
