//WAP to print sum of n integers

#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter a number";
   int n;
   cin>>n;
   int i = 1;
   int sum = 0;
   while(i<=n)
   {
       sum+=i;
       i++;
   }
   cout<<"Sum is "<<sum<<endl;
    return 0;
}
