//WAP to check if a no. is prime

#include<iostream>
using namespace std;
int main()
{
 cout<<"Enter a number";
 int n;
 cin>>n;
 if(n==1)
    cout<<"Neither prime nor composite";
if(n==2)
    cout<<"Prime";
 int i = 2;
 while(i<n)
 {
     if(n%i==0)
        cout<<"Not prime"<<endl;
     else
        cout<<"Prime";
    i++;
 }
}
