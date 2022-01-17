/*
deallocates memory
compiler provides by default but you can create one explicitly
you need to call destructor manually for dynamically created object
*/
#include<iostream>
using namespace std;

class student{

    public:
    student()
    {
        cout <<"Constructor called"<<endl;
    }
    ~student()
    {
        cout <<"Destructor called"<<endl;
    }
};

int main()
{
    student s1;
    student s2;

    student *s = new student();

    //manual calling of destructor is required for a dynamically
    //created object
    delete s;
}