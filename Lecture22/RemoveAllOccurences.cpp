//Remove all occurences in a string - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/


#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part)<s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};