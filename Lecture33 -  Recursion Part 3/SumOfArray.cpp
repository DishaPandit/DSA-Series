//Return the sum of elements of array using recursion

#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    //  base case
    if(size <= 0)
        return 0;
    if(size==1)
        return arr[0];
    
    int ans = arr[0] + sum(arr+1, size-1);
    return ans;
}
int main()
{
    int size;
    cout << "Enter size of elements" <<endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements "<<endl;

    for(int i = 0; i<size; i++)
    {
        cin>> arr[i];
    }

    int ans = sum(arr,size);
    cout << "Answer is : "<<ans <<endl;
    return 0;
}