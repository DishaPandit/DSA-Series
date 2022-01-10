#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string &str,int s,int e)
{
    //base case
    if(s>e)
        return true;
    
    if(str[s]!=str[e])
        return false;
    else
    {
        s++;
        e--;
        checkPalindrome(str,s,e);
        return true;
    }
        
}
int main()
{
    cout<<"Enter a string : "<<endl;
    string str;
    cin>>str;
    bool ans = checkPalindrome(str,0,str.length()-1);
    if(ans)
        cout <<"String is palindrome. "<<endl;
    else
        cout <<"String is not palindrome. "<<endl;

}