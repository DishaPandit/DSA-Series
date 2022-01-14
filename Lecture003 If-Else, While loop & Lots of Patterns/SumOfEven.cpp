//WAP to print sum of even no.till n

#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter a number"<<endl;
   int n;
   cin>>n;
   int i = 2;
   int sum = 0;
   while(i<=n)
   {
       sum+=i;
       i+=2;
   }
   cout<<"Sum is "<<sum<<endl;
    return 0;
}
