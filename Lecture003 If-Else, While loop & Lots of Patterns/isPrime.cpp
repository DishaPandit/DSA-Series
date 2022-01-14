//WAP to check if a no. is prime

#include<iostream>
using namespace std;
int main()
{
 cout<<"Enter a number"<<endl;
 int n;
 cin>>n;
 if(n==1)
    cout<<"Neither prime nor composite"<<endl;
if(n==2)
    cout<<"Prime"<<endl;
 int i = 2;
 while(i<n)
 {
     if(n%i==0)
     {
        cout<<"Not prime"<<endl;
        break;
     }
     else
     {
        cout<<"Prime"<<endl;
        break;
     }
    i++;
 }
}
