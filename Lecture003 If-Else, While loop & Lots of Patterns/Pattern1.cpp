/*


****
****
****
****


*/


#include<iostream>
using namespace std;
int main()
{
 cout<<"Enter a number";
 int n;
 cin>>n;
 
 //for no.of rows
 for(int i = 0; i<n; i++)
 {
    //for no. of columns
    for(int j = 0; j<n; j++)
        cout<<"*";
    cout<<endl;
 }
}
