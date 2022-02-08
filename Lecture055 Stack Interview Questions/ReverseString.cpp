//Reverse a string using stack. 
//Stack has a property that it reverses anything which is kept in it becoz of LIFO rule

//TC - O(n) - becoz we are traversing each no.
//SC - O(n) - becoz we are using a stack 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout <<"Enter a string : "<<endl;
    cin>>str;

    stack<char> s;
    for(int i = 0; i<str.length();i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans;
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Reverse is : "<<ans<<endl;
}