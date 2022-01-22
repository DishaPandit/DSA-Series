#include<iostream>
using namespace std;

class A{

    public:
    void funcA()
    {
        cout<<"Using class A"<<endl;
    }
};

class D{

    public:
    void funcD()
    {
        cout<<"Using class D"<<endl;
    }
};

class B : public A{

    public:
    void funcB()
    {
        cout<<"Using class B"<<endl;
    }
};

class C : public A, public D{

    public:
    void funcC()
    {
        cout<<"Using class C"<<endl;
    }
};

int main()
{
    B obj1;
    obj1.funcB();
    obj1.funcA();

    C obj2;
    obj2.funcA();
    obj2.funcC();
    obj2.funcD();
}