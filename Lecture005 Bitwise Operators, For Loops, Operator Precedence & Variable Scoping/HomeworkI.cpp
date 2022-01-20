#include<iostream>
using namespace std;

int main()
{

    //ques 1

    /*
    int a , b = 1;
    a = 10;
    if(++a)
        cout << b;
    else 
        cout << ++b;
    */

    //ques 2
    /*
    int a = 1;
    int b = 2;
    if(a-- > 0 && ++b > 2)
    {
        cout << "Stage 1 - Inside if ";
    }
    else
    {
        cout << "Stage 2 - Inside else ";
    }
    cout << a <<" " << b << endl;
    */

   //ques 3
    /*
   int number = 3;
   cout << (25*(++number));

    */

   //ques 4
    /*
   int a = 1;
   int b = a++;
   int c = ++a;
   cout << b;
   cout << c;
    */

   //ques 5
   int a = 1;
    int b = 2;
    if(a-- > 0 || ++b > 2)
    {
        cout << "Stage 1 - Inside if ";
    }
    else
    {
        cout << "Stage 2 - Inside else ";
    }
    cout << a <<" " << b << endl;
}