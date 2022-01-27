#include<iostream>
using namespace std;

int main()
{
  int sum = 0;
  cout<<"Enter elements : "<<endl;
  int arr[5];
  for(int i =0;i<5;i++)
  {
    cin>>arr[i];
    sum = sum + arr[i];
  }
  cout<<"Sum of array is " <<sum;
  return 0;
}