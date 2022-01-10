/*
    i/p : abcde
    o/p : edcba
*/
#include<iostream>
#include<string.h>
using namespace std;

void reverseString(string &str,int s)
{
    int n = str.length();
    //base case
    if(s>(n-s-1))
        return;
    
    swap(str[s],str[n-s-1]);
    s++;
    
    reverseString(str,s);
    
}

int main()
{
    string str;
    cout<<"Enter a string : "<<endl;
    cin>>str;
    int s=0;
    reverseString(str,s);
    cout<<"Reversed string : "<<endl;
    cout<<str<<endl;
    return 0;
};

