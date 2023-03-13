/*
There are a few errors in the code fragment:

Class C and D are inheriting virtually from class B, but class B is not defined as virtual in class A. To fix this, class B should be defined as virtual in class A.
There is no catch block for catching the exception of type D, which is being thrown in the getData() function. To fix this, a catch block for D should be added.
There is a typo in the catch block for class C, where it is written twice instead of one for class B. To fix this, the second catch block should be for class D.
The corrected code fragment is given below:
*/


#include <iostream>
using namespace std;

class A
{
public:
    A() {}
    class B {};
    virtual ~A() {}
    class C : public virtual B {};
    class D : public virtual B {};

    void getData() { throw D(); }
};

int main()
{
    A a1;
    try
    {
        a1.getData();
    }
    catch (A::B&)
    {
        cout << "In class B";
    }
    catch (A::C&)
    {
        cout << "In class C";
    }
    catch (A::D&)
    {
        cout << "In class D";
    }
    catch (...)
    {
        cout << "None";
    }
    return 0;
}
