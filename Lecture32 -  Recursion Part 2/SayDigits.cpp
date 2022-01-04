/*

 i/p : 412
 o/p : Four One Two

*/

#include<iostream>
using namespace std;

void sayDigit(int n)
{
    string arr[10] = {"zero", "one","two","three",
                        "four","five", "six","seven",
                        "eight","nine"};
    //base case
    if(n==0)
        return;
    
    //processing
    int digit = n%10;
    n=n/10;

    //rc
    sayDigit(n);

    cout << arr[digit]<<" ";        //to print no. in reverse order this statement should be kept above r.c. statement
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    sayDigit(n);
    return 0;
}
