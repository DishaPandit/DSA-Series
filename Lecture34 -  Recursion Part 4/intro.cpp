/*

i/p : abcde
o/p : edcba

*/

#include<iostream>
#include<string.h>
using namespace std;

void reverseString(string &str,int s,int e)
{
    //base case
    if(s>e)
        return;
    
    swap(str[s],str[e]);
    s++;
    e--;
    
    reverseString(str,s,e);
    
}

int main()
{
    string str;
    cout<<"Enter a string : "<<endl;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    reverseString(str,s,e);
    cout<<"Reversed string : "<<endl;
    cout<<str;
    return 0;
};

