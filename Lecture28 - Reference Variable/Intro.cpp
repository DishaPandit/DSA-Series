/*

What? --->  Reference variable - same memory but different names
Why?  --->  

*/

#include<iostream>
using namespace std;

//Call by value
void update1 (int n)
{
    n++;
}

//Call by reference
void update2 (int &n)
{
    n++;
}

//returning a refernce variable - bad practice - may give warning
// becoz here scope of num and ans is the func()
// their memory gets deleted after the func()
// so there is nothing actually which we are returning
int& func(int n)
{
    int num = 20;
    int &ans = num;
    return ans;
}

int getSum(int* arr, int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int i = 5;
    //creating refernce variable
    int &j = i;

    cout << endl;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    cout << "--------------------------------------------------------"<< endl;
    
    int n = 10;
    cout << "Before : "<< n << endl;
    update1(n);
    cout << "After : "<< n <<endl;

    int m = 10;
    cout << "Before : "<< m << endl;
    update2(m);
    cout << "After : "<< m <<endl;

    cout << "--------------------------------------------------------"<< endl;
    int ans = func(n);
    cout << ans <<endl;

    cout << "--------------------------------------------------------"<< endl;
    //Dynamic allocation

    char a = 'a';
    cout << "Size of a : "<< sizeof(a) <<endl;
    char *ptr = &a;
    cout << "Size of ptr : "<< sizeof(ptr) <<endl;

    cout << "--------------------------------------------------------"<< endl;


    //creating array by taking size in input
    int size;
    cout << "Enter size of elements" <<endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements "<<endl;

    for(int i = 0; i<size; i++)
    {
        cin>> arr[i];
    }

    int sum = getSum(arr,size);
    cout <<"Sum is : "<<sum <<endl;

    return 0;

}