<<<<<<< HEAD
// n is starting from 0

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm = 0;

    for(int i = 2; i<=n; i++)
    {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm =  nextTerm;
    }

    return nextTerm;

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
// n is starting from 0

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm = 0;

    for(int i = 2; i<=n; i++)
    {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm =  nextTerm;
    }

    return nextTerm;

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
