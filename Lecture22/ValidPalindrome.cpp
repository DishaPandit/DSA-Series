//LC ques 125 - https://leetcode.com/problems/valid-palindrome/

#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    
private:
    bool valid(char ch)
    {
        if( (ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
        
        
    }
    
    char lowercase(char ch)
    {
        char temp;
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch;
        else
        {
            temp = ch - 'A' + 'a';
            return temp;
        }
                        
    }
    
    bool checkPalindrome(string str)
    {
        int s = 0;
        int e = str.length()-1;
        
        while(s<=e)
        {
            if(str[s]!=str[e])
                return 0;
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        
        //remove invalid character
        
        string temp = "";
        
        for(int j = 0; j<s.length(); j++)
        {
            if(valid(s[j]))
                temp.push_back(s[j]);
        }
        
        //change to lowercase
        
         for(int j = 0; j<temp.length(); j++)
         {
             temp[j]=lowercase(temp[j]);
         }
        
        return checkPalindrome(temp);
        
    }
};