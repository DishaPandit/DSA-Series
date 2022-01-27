//WAP for given AP
// nth term = 3n + 7

#include <iostream>
using namespace std;

int APSeries(int n)
{
  return (3*n)+7;
}

int main()
{
  int a;
  cout<<"Enter a number";
  cin>>a;
  cout<<"Answer is "<<APSeries(a);
  return 0;
}
