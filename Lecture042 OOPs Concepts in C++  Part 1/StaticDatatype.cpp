/*
    We do not need to create object to access the static datatype
    You will need scope resolution operator :: to use it

    static datatype variable has only one copy created that is used
    across different objects. If a change is made at a place, it gets
    reflected to other places as well
*/

#include<iostream>
#include<string.h>
using namespace std;

class student{

    public:

    int rno;
    static string school;

    student()
    {
        cout <<"Constructor called"<<endl;
    }
    
};

//syntax to initialize static datatype
string student :: school = "RLB";

int main()
{
    student s1;
    cout << student::school <<endl;

    //it works but it is not recommended coz it belongs to class not the object
    cout<<s1.school <<endl;
    
}