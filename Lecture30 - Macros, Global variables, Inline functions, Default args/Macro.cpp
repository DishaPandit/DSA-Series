/*
Macro - A macro is a piece of code in a program that is replaced by the value of the macro
A macro is a piece of code in a program that is replaced by the value of the macro
It is not a variable hence it does not take any memory
It simply replaces all the places that use macro with its value before compilation
It cant be modified inside the program. Only can be changed where it is defined
It is easy to maintain
Ultimately increases performance of program however small it may be

Types of Macros
---------------
1. Object-like macro -  An object-like macro is a simple identifier which will be replaced by a code fragment

2. Chain macro -Macros inside macros are termed as chain macros. 
                In chain macros first of all parent macro is expand then child macro is expanded. 
                ex.
                #define INSTAGRAM FOLLOWERS
                #define FOLLOWERS 138

3. Multi-line macro - So to create a multi-line macro you have to use backslash-newline. 
                      ex.
                      #define ELE 1, \
                                  2, \
                                  3

4. Function-like macro - These macros are the same as a function call.
                         It replaces the entire code instead of a function name.
                         Pair of parentheses immediately after the macro name is necessary.
                         If we put a space between the macro name and the parentheses in the macro definition then the macro will not work. 

                         ex.
                         #define min(a, b) (((a) < (b)) ? (a) : (b))
                                

*/

#include<iostream>
using namespace std;

#define PI 3.14

int main()
{
    int i = 5;
    //double pi = 3.14;

    int area = PI*i*i;
    cout <<"Area is "<< area <<endl;


}