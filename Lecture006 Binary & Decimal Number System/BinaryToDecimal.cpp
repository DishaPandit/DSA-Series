#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout <<"Enter a binary represenatation : "<<endl;
    long long int n;
    cin >> n;

    int ans = 0;
    int digit;

    int i = 0;

    while(n!=0)
    {
        digit = n%10;
        ans = ans + (digit * (pow(2,i)));
        n = n/10;
        i++;
    }
    cout << "Decimal representation is : "<<ans <<endl;
    return 0;

}