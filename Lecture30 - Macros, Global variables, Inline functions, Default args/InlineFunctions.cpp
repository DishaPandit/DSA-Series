/*
Inline functions - 

Everytime we call a function, a stack memory is created for the arguments passed
This takes space in memory.
If we use reference variables for passing arguments, still the time is 
taken for calling the functions.
So, to overcome this situation there is a concept of inline functions. 
It works just like macro. It replaces the function call with body of 
fucntion before compilation.
Hence, code reamins readable coz we are still using function,
there is no extra memory consumed for these function parameters
and the performance of code of increases

-- if function body is of 1 line - compiler can make a function inline
-- if function body is of 2-3 lines - compiler may/may not make a function inline
-- if function body is >3 lines - compiler will not make a function inline

*/

#include <iostream>
using namespace std;

inline int getMax(int& a, int& b)
{
    return (a>b) ? a : b;
}
int main()
{
    int a = 5, b = 10;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans <<endl;

    a+=3;
    b+=2;

    ans = getMax(a,b);
    cout << ans <<endl;

    return 0;
}