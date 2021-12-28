/*
Difference between pointer and array

1. Size of pointer is compiler dependent. It can be 4 or 8 bytes.
   Size of array = size of datatype * no. of elements in array

2. Address of first element of array and the pointer to that array is different

3. Symbol table for array cant be changed.
   Symbol table for pointer can be changed
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 9, 34, 5, 6, 4, 3, 35, 55, 3};

    cout << "Address of first element " << arr << endl;

    // using & operator
    cout << "Address of arr[0] " << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << (*arr) + 1 << endl;

    // arr[i] = *(arr+i) this is same as below
    // i[arr] = *(i+arr)

    int i = 5;
    cout << i[arr] << endl;
    cout << "---------------------------------------------------" << endl;

    int temp[10] = {1,2};
    cout << sizeof(temp)<<endl;
    cout << sizeof(*temp)<<endl;
    cout << sizeof(&temp)<<endl;

    //size of pointer is compiler dependent. For this system it is 4 bytes

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    cout << "---------------------------------------------------" << endl;

    int a[3] = {1,3,5};
    int *p =  &a[0];
    cout <<"Address of a[0] : "<< &a <<endl;
    cout <<"Address of pointer p : "<< &p <<endl;

    cout << "---------------------------------------------------" << endl;


    //Symbol table concepts

    int arr2[10];
/*
    Below code gives error

    arr = arr+1;

*/
    int *p2 = &arr2[0];
    cout << "pointer pointing to this address before : "<< p2 <<endl;
    p2 = p2+1;
    cout << "pointer pointing to this address after : "<< p2 <<endl;

    return 0;

}