//implement using for loop

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter a number greater than 0: "<<endl;
    int n;
    cin>>n;

    if(n==1)
        cout <<"Neither prime nor composite "<<endl;
    
    if(n==2)
        cout <<"Prime "<<endl;
    
    bool isPrime = 1;

    for(int i =2; i<n; i++)
    {
        if(n%i==0)
        { 
            isPrime = 0;
            break;   
        }
              
    }
    if(isPrime)
        cout<<"Prime"<<endl;
    else
        cout<<"Not prime"<<endl;
}