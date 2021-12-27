//Codestudio - https://www.codingninjas.com/codestudio/problems/string-palindrome_624944
#include<string.h>
bool checkPalindrome(char str[]) {
    
    int s = 0;
    int e = strlen(str)-1;
    
    while(s<=e)
    {
        if(str[s]!=str[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
    
}
