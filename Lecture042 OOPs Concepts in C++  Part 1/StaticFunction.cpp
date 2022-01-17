/*
    1. No need to create object to call them
    2. Do not have this leyword because it does not belong to any particular
       object. It belongs to the class
    3. static functions can access static members only
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

    static void random()
    {
        cout<<"Static function called"<<endl;
        cout << school <<endl;

        //generates error becoz static function cant access non static data member
        //cout<< rno <<endl;
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

    //calling static function
    student::random();
    
}