// Count length of string 

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
int main()
{
    cout<<"Enter a string ";
    char name[20];
    cin>>name;
    cout<<"Length is "<<getLength(name)<<endl;
    return 0;
}
