#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //assuming we have 16 bit int. Use online ide for correct answer
    cout << "Enter a number : "<<endl;
    long long int n;
    cin>>n;
    unsigned long long int i = 0;
    unsigned long long int ans = 0;
    if(n < 0)
    {
        n = pow(2,16) + n;
    }
    //binary representation of this n in unsigned int will be same as -n in signed bit
    cout << n <<endl;

    while(n)
    {
        int lastBit = n&1;
        ans = (pow(10,i) * lastBit) + ans;
        n = n>>1;
        i++;
        //cout << ans <<endl;
    }
    cout << ans <<endl;
    return 0;
}