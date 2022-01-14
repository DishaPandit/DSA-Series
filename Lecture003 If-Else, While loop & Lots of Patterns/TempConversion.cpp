//WAP to convert Fahrenheit into Celsius

#include<iostream>
using namespace std;
int main()
{ 
   cout<<"Enter a temperature in Fahrenheit";
   int f;
   cin>>f;
   cout<<"Temp in celsius" <<((f-32)*5)/9;
    return 0;
}
