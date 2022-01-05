<<<<<<< HEAD
// WAP to print nth fibonacci term of the fibonacci series (n starting from 0)
// https://leetcode.com/problems/fibonacci-number/

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;

}

int main()
{
    int n;
    cout << "Enter a number "<<endl;
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;

    return 0;
}
||||||| 3935907
=======
// WAP to print nth fibonacci term of the fibonacci series (n starting from 0)
// https://leetcode.com/problems/fibonacci-number/

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;

}

int main()
{
    int n;
    cout << "Enter a number "<<endl;
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;

    return 0;
}
>>>>>>> 95b2c2d8a00fe3bac08571b4f6e1cc4224aecf45
