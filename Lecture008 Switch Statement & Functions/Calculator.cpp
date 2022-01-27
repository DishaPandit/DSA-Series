#include<iostream>
using namespace std;

int main()
{
    cout <<"Enter two numbers : "<<endl;
    int a,b;
    cin>>a>>b;
    cout <<"Enter operation you want to perform : "<<endl;
    char ch;
    cin>>ch;
    switch(ch)
    {
        case '+' : cout <<"a + b = "<< a+b <<endl;
                   break;

        case '-' : cout <<"a - b = "<< a-b <<endl;
                   break;

        case '*' : cout <<"a * b = "<< a*b <<endl;
                   break;

        case '/' : cout <<"a / b = "<< a/b <<endl;
                   break;

        case '%' : cout <<"a % b = "<< a%b <<endl;
                   break;

        default : cout <<"Invalid operation."<<endl;
        
    }
}