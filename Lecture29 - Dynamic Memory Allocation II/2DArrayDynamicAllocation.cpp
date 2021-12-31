#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array "<<endl;
    int n ;
    cin >> n;

    //creation of square matrix
    int **arr = new int*[n];
    for(int i = 0;  i<n; i++)
    {
        arr[i] = new int[n];
    }

    //taking input
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //taking input
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"--------------------------------------------------------------"<<endl;

    cout<<"Enter size of rows "<<endl;
    int row ;
    cin >> row;

    cout<<"Enter size of columns "<<endl;
    int col ;
    cin >> col;

    //creation of matrix with different rows and col
    int **arr2 = new int*[row];
    for(int i = 0;  i<row; i++)
    {
        arr2[i] = new int[col];
    }

    //taking input
    for(int i = 0; i<row ; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin >> arr2[i][j];
        }
    }

    //taking input
    for(int i = 0; i<row ; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cout << arr2[i][j] <<" ";
        }
        cout<<endl;
    }

    //releasing memory
    //first release the array them release array of pointer

    for(int i = 0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;


}