#include<iostream>
#include<string.h>
using namespace std;

int getMaxOcc(string str)
{
    int arr[26]={0};
    //create an array of count of characters
    for(int i = 0; i<str.length();i++)
    {
        char ch = str[i];
        int num = 0;
        num = ch - 'a';
        arr[num]++;
    }
    
    //find max occuring character
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    
    return 'a'+ans;
}

int main()
{
    cout<<"Enter a string";
    char ch[20];
    cin>>ch;
    char ans = getMaxOcc(ch);
    cout<<ans;
    return 0;
}
