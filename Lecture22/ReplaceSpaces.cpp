//Replace spaces with @40 - https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=1



// string replaceSpaces(string &str){
	
//     string temp = "";
    
//     for(int i = 0; i<str.length(); i++)
//     {
//         if(str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//             temp.push_back(str[i]);
//     }
    
//     return temp;
// }

//solution 2

#include<iostream>
#include<string.h>

using namespace std;

string replaceSpaces(string &str)
{
    string s = "@40";
    for(int i =0; i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,s);
        }
    }
    return str;
}