//Implement heap using array

#include<iostream>
using namespace std;

class heap{

    public : 

    int arr[100];
    int size;
    //0 se start kiya taki jab neeche size + 1 kre to first element index 1 pe insert ho
    //first element 1 pe insert krre hai taki left, right aur parent index calculate krne me easy ho
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)        //TC - O(log n)
    {
        //to insert at the end of array
        size = size + 1;
        int index = size;
        arr[index] = val;

        //jab tak index 0 na ho jaye
        while(index > 1){

            int parent = index/2;
            if(arr[parent] < arr[index])        //condition of max heap not satisfied then swap
            {
                swap(arr[parent],arr[index]);

                //index update krdo taki ab next comparison current parent aur uske parent me ho
                index = parent;
            }
            else
                //mtlb sab kuch shi chal raha hai. heap order satisfied hai
                return;
        }

    }

    //we delete root of the heap
    void deletion()         //TC - O(log n)
    {
        if(size == 0)
            return;

        //root ko last element se swap kr diya
        arr[1] = arr[size];
        //size decrement kr diya taki last element accessible na ho hence ho gya delete
        size--;

        //ab heap order ko maintain krna hai by taking root node to its correct position
        int i = 1;
        while(i < size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[leftIndex] > arr[i])
            {
                swap(arr[leftIndex],arr[i]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i])
            {
                swap(arr[rightIndex],arr[i]);
                i = rightIndex;
            }
            else
                //matlb sab correct position pe hai
                return;

        }
    }

    void print(){

        for(int i = 1; i<=size; i++)
        {
            cout << arr[i] <<" ";
        }
        cout <<endl;
    }

};

void maxHeapify(int arr[], int n, int i)        //TC - O(log n)
    {
        int largest = i;
        int left = 2*i;
        int right = 2*i +1;

        if(left < n && arr[largest] < arr[left])
            largest = left;

        if(right < n && arr[largest] < arr[right])
            largest = right;

        if(largest != i)
        {
            swap(arr[largest],arr[i]);
            maxHeapify(arr, n, largest);
        }
    }

int main(){

    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(55);
    h.insert(30);
    h.insert(20);
    h.insert(40);

    cout <<"Printing heap : "<<endl;
    h.print();

    h.insert(70);
    cout <<"Printing after inserting new element : "<<endl;
    h.print();

    h.deletion();
    cout <<"Printing after deletion : "<<endl;
    h.print();

    //Convert below array into max heap
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2; i>0; i--)
    {
        maxHeapify(arr,n,i);
    }
    cout <<"Printing heap : "<<endl;

    for(int i = 1; i<=n; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout <<endl;


}

