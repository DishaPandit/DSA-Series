/*

i/p : a=3,b=2
o/p : a^b i.e. 3^2= 9

*/

#include<iostream>
using namespace std;

int power(int a,int b)
{
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    
    int ans = power(a,b/2);
    //recursive call
    if(b&1)                     //b is odd
        return a*ans*ans;
    else                        //b is even
        return ans*ans;

}

int main()
{
    cout<<"Enter a and b :"<< endl;
    int a;
    int b;
    cin>>a>>b;
    int ans = power(a,b);
    cout << "Answer is : "<<ans<<endl;
    return 0;
}