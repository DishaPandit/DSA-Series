// WAP to reverse the given string

#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[],int len)
{
    int s = 0;
    int e = len-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    cout<<"Enter a string ";
    char name[20];
    cin>>name;
    int n = getLength(name);
    reverse(name,n);
    cout<<"Reverse is "<<name;
    return 0;
}
