#include<iostream>
using namespace std;
 int Fibonacci(int n)
 {
   if(n==1)
    return 0;
   
   if(n==2)
    return 1;

   int num = n-2;
   int next;
   int num1 = 0;
   int num2 = 1;
   
   for(int i =1; i<=num; i++)
   {
    next = num1 + num2;
    num1 = num2;
    num2 = next;

   }
   return next;
 }
 int main()
 {
   cout<<"Enter n"<<endl;
   int n;
   cin>>n;
   cout<<n<<"th Fibonacci term is : "<<Fibonacci(n);
   return 0;
 }