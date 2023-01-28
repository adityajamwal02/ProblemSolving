#include<iostream>
using namespace std;
class rectangle
{
    float l,w;
 public:
    rectangle(){}
    rectangle(float l,float w)
    {
        setlength(l);
        setwidth(w);
    }
    void setlength(float l)
    {
        this->l=l;
    }
    void setwidth(float w)
    {
        this->w=w;
    }
    float getlength()
    {
        return l;
    }
    float getwidth()
    {
        return w;
    }
    void show()
    {
        cout<<"\nLength of Rectangle: "<<getlength()<<endl;
        cout<<"\nWidth of Rectangle: "<<getwidth()<<endl;
    }
    float perimeter()
    {
        float p=0;
        p= 2*(this->l + this->w);
        return p;
    }
    float area()
    {
        float a;
        a= (this->l * this->w);
        return a;
    }
    void compare(rectangle &o)
    {
        int lf1=0,wf1=0,lf2=0,wf2=0;
        if( this->l > o.l)
        {
           cout<<"\nLength of Rectangle 1st is larger"<<endl;
            lf1=1;
        }
        else
        {
            cout<<"\nLength of Rectangle 2nd is larger"<<endl;
            lf2=1;
        }
        if( this->w > o.w)
        {
            cout<<"\nWidth of Rectangle 1st is larger"<<endl;
            wf1=1;
        }
        else
        {
            cout<<"\nWidth of Rectangle 2nd is larger"<<endl;
            wf2=1;
        }
    }
    void compare(int a)
    {
        int areas;
        areas=this->area();
        if(areas > a)
            cout<<"\nArea of Rectangle 1st is more than 2nd\n";
        else
            cout<<"\nArea of Rectangle 2nd is more than 1st\n";
    }
};
int main(void)
{
    rectangle obj1(2.6,8.1),obj2;
    obj1.show();
    obj2.setlength(4.9);
    obj2.setwidth(2.3);
    obj2.show();
    cout<<"\nPerimeter of Rectangle: "<<obj1.perimeter();
    cout<<"\nArea of Rectangle: "<<obj1.area();
    obj1.compare(obj2);
    obj1.compare(obj2.area());
}
