/*
Recursive function is a function which calls itself

To write a recursive function, we have to write two things mandatorily
1. Base Case/Condition - Case at which the recursion stops. Mandatory to give return statement here
2. Recursive relation - based on which the function will work

There is one more component which is not mandatory but can be present
3. Processing - like increment, decrement etc

If base case is not there, we get segmentation fault
------------------------------------------------------
Reason -- everytime a function is called, memory is created in stack memory 
for that call. So here the call will go like this, 
factorial(5),factorial(4),factorial(3),factorial(2),factorial(1),
factorial(0),factorial(-1),factorial(-2).......and so on until the stack 
memory gets full. At some point of time, this will lead to stack overflow.
Hence, a base case is necessary to handle this.

--------------------------------------------------------

1. Tail Recursion - where recursive relation comes at end

func()
{
    base case

    processing

    recursive relation
}

2. Head Recursion - where recursive relation comes after base case

func()
{
    base case

    recursive relation

    processing
}

*/

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else 
    {
        int smallProblem = factorial(n-1);
        int bigProblem = n*smallProblem;
        return bigProblem;

        //or you can replace line 28 -30 with below line
        // return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout <<"Enter a number "<<endl;
    cin >> n;

    int fact = factorial(n);
    cout <<"Factorial is : "<<fact <<endl;
    return 0;
}