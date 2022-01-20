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
 bool isPrime = 1;
 while(i<n)
 {
     if(n%i==0)
     {
        isPrime = 0;
        break;
     }
     
    i++;
 }
 if(isPrime)
   cout<<"Prime"<<endl;
else
   cout<<"Not prime"<<endl;
}
