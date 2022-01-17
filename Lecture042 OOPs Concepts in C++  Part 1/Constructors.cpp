/*
    If you define a constructor explicitly, then the default constructor 
    provided by compiler does not exist.
*/

#include<iostream>
using namespace std;

class student{

    public:

    int rno;
    string name;
    int marks;

    //defining constructor explicitly

    student()
    {
        cout << "Constructor called"<<endl;
    }

    //parameterized constructor
    student(int rno, string name)
    {
        // rno = rno;   this will take value of rno at line 19 and 
        // again put it back in rno at line 19
        //which doesnt make any sense
        //we want to take value of parameter rno and put it inside 
        //value of data member rno at line 8
        //for that we have to use this keyword
        //this is a pointer to the current object

        this->rno =  rno;
        cout << "this is pointing to address : "<<this <<endl;
        this->name = name;
    }

    //copy constructor
    /*
    once you define a copy constructor, the default copy constructor
    does not exist
    */
   
    student(student &s)
    {
        cout << "User defined copy constructor called "<<endl;
        this->rno = s.rno;
        this->name = s.name;
    }

    void print()
    {
        cout << "Roll no. : "<< this->rno<<endl;
        cout << "Name : "<<this->name<<endl;
    }
    
    ~student(){
        cout<<"delete"<<endl;
    }

};

int main(){

    cout <<"Start"<<endl;
    //object created statically
    student s(10,"Disha");
    cout<<"Address of object s is : "<<&s<<endl;
    cout <<"End"<<endl;

    cout <<"-----------------------------------------------"<<endl;
    //using copy contructor
    //we dont have to explicitly define copyy constructor inside class
    //it is already understood using line 64
    //however, if you want you can define copy constructor inside class

    student s1(20,"Dhanno");
    cout<<"Printing s1 : "<<endl;
    s1.print();
    cout << "Address of s1 : "<< &s1.rno<<endl;
    student s2=s1;
    cout<<"Printing s2 : "<<endl;
    s2.print();
    cout << "Address of s2 : "<< &s2.rno<<endl;

}