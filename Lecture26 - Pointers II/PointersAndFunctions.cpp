#include<iostream>
using namespace std;

void print(int *ptr)
{
    cout << *ptr<<endl;

}
void update1(int *p)
{
    p = p+1;

}
void update2(int *p)
{
    *p = *p+1;

}
int getSum(int arr[], int n)    //here whole array is not passed.pointer to that array is passed
                                //can also write (int *arr, int n) as parameters
{    
    cout <<"Size is : "<<sizeof(arr)<<endl; //prints the size of pointer instead of whole array

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}
int main()
{

    int val = 5;
    int *p = &val;

    print(p);

    cout<<"Before update : "<< p <<endl;
    update1(p);
    cout <<"After update : "<< p <<endl;    //value of address remains same 
    //becoz pointer was passed by value

    cout<<"Before update : "<< *p <<endl;
    update2(p);
    cout <<"After update : "<< *p <<endl;    //value of p gets updated 
    //becoz pointer points to the same address

    int arr[5] = {1,2,3,4,5};

    int sum = getSum(arr,5);
    cout << "Sum is all elements: "<<sum <<endl;

    int sum2 = getSum(arr+3,2);
    cout << "Sum is specified elements: "<<sum2 <<endl;


    return 0;
}