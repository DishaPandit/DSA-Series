/*
    i/p : arr1[] = {1,3,5,7,9}
          arr2[] = {2,4,6,8}
    o/p : arr3[] = {1,2,3,4,5,6,7,8,9}

*/

#include <iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
   int k = 0;
   int i = 0;
   int j = 0;

   while(i<n && j<m)
   {
      if(arr1[i]<= arr2[j])
      {
        //   arr3[k] = arr1[i];
        //   k++;
        //   i++;

          arr3[k++] = arr1[i++];
      } 
      else
      {
        //   arr3[k] = arr2[j];
        //   k++;
        //   j++;

          arr3[k++] = arr2[j++];
      }
   }
   //copy remaining element of arr1 into arr3
   while(i<n)
   {
    //    arr3[k] = arr1[i];
    //    k++;
    //    i++;

        arr3[k++] = arr1[i++];

   }
   //copy remaining element of arr2 into arr3
   while(j<n)
   {
    //    arr3[k] = arr2[j];
    //    k++;
    //    j++;

       arr3[k++] = arr2[j++];
       
   }
}

void print (int arr[], int k){

    for(int i =0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8};
    int arr3[] = {0};

    int ans[8];
    mergeArray(arr1,5,arr2,4,ans);

    print(ans,9);

    return 0;
}