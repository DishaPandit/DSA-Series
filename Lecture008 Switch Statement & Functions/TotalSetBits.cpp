#include <iostream>
using namespace std;
int countSetBits(int a, int b)
{
  int count =0;
  while(a!=0 || b!=0)
  {
    if(a&1)
    {
      count++;
      a=a>>1;
    }
    if(b&1)
    {
      count++;
      b=b>>1;
    }
  }
  return count;
}
int main()
{
  cout<<"Enter two number";
  int a,b;
  cin>>a>>b;
  cout<<"No. of set bits "<<countSetBits(a,b);
  return 0;
}