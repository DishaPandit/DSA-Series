/*
https://www.codingninjas.com/codestudio/guided-paths/pointers

Types of pointers

1. NULL pointer
2. Double pointer
3. Void pointer - A void pointer can hold an address of any type and can be typecasted to any type. It cant be dereferenced
                    void *ptr;

4. Wild pointer - A pointer which is declared but not initialized
5. Dangling pointer - A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted). 
*/

#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<<num<<endl;

    //address of operator &

    cout<<"address of num is "<< &num<<endl;


    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 (value of pointer is copied)
    * p1 = 20; // value pointed to by p1 = 20
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
}