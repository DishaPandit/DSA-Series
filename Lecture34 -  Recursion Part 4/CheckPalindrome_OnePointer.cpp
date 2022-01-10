#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string &str,int s)
{
    int n = str.length();
    //base case
    if(s>n-s-1)
        return true;
    
    if(str[s]!=str[n-s-1])
        return false;
    else
    {
        s++;
        checkPalindrome(str,s);
        return true;
    }
        
}
int main()
{
    cout<<"Enter a string : "<<endl;
    string str;
    cin>>str;
    int s =0;
    bool ans = checkPalindrome(str,s);
    if(ans)
        cout <<"String is palindrome. "<<endl;
    else
        cout <<"String is not palindrome. "<<endl;

}