#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size, int target)
{
    //base case
    if(size==0)
        return 0;
    
    if(arr[0]==target)
        return 1;
    
    else
    {
        bool ans = linearSearch(arr+1,size-1,target);
        return ans;
    }

}
int main()
{
    int size;
    cout <<"Enter the size of array :"<<endl;
    cin >>size;
    int *arr = new int[size];
    cout << "Enter elements "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout <<"Enter element you want to find "<<endl;
    cin >> target;

    bool ans = linearSearch(arr,size,target);
    if(ans)
        cout <<"Element found "<<endl;
    else
        cout <<"Element not found "<<endl;

    return 0;
}