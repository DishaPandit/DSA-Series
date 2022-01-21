//using bits
// not in lexicographical order

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void powerSet(string &str)
{
    int n = str.length();
    int powSize = pow(2,n);

    for(int counter =0; counter<powSize; counter++)
    {
        for(int j =0; j<n; j++)
        {
            if((counter & (1<<j)) != 0)
                cout << str[j];
        }
        cout <<" ";
    }
}

int main()
{
   string str; 
   cout <<"Enter a string"<<endl;
   cin>>str;

   powerSet(str);

}