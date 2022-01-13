#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;

    char b ='a';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d <<endl;

    cout<<"----------------------------------------------"<<endl;


    int size = sizeof(a);
    cout << "Size of int is : "<< size <<endl;

    int size1 = sizeof(b);
    cout << "Size of char is : "<< size1 <<endl;

    int size2 = sizeof(bl);
    cout << "Size of bool is : "<< size2 <<endl;

    int size3 = sizeof(f);
    cout << "Size of float is : "<< size3 <<endl;

    int size4 = sizeof(d);
    cout << "Size of double is : "<< size4 <<endl;

    cout<<"----------------------------------------------"<<endl;

    unsigned int i = 112;
    cout << i <<endl;

    /*here, negative no. is stored as twos complement,
    the most significant bit becomes 1. But compiler sees
    that the no. is unsigned hence it treats the no. as
    positive and hence the 1 at MSB makes the value of 
    no. extremely large

    */
    unsigned int j = -112;
    cout << j << endl;

    return 0;

}
