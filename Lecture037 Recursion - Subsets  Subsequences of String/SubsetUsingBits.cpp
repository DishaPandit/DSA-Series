//using bits
// TC - Theta((2^n)*n)

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void powerSet(vector<int>& v)
{
    int n = v.size();
    int powSize = pow(2,n);

    for(int counter =0; counter<powSize; counter++)
    {
        for(int j =0; j<n; j++)
        {
            if((counter & (1<<j)) != 0)
                cout << v[j];       
        }
        cout <<" ";
    }
}

int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   powerSet(v);

}