#include<iostream>
using namespace std;

int main()
{
    int a ='a';
    cout << a <<endl;

    char ch = 98;
    cout << ch<< endl;

    //int takes 4 bytes but char takes only 1 byte
    //So after converting int to char, whatever value was 
    //stored in last byte, its char representataion
    // will be returned
    char ch1 = 123456;
    cout << ch1 <<endl;

    
}
