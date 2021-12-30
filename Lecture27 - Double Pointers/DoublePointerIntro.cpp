#include<iostream>
using namespace std;

//No change in values coz p2 was passed by value
void update1 (int **p2) 
{
    p2 = p2 + 1;
}

//Change in value of p coz address of p was changed 
void update2 (int **p2) 
{
    *p2 = *p2 + 1;
}

//Change in value of i 
void update3 (int **p2) 
{
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << endl;
    
    //ways to print value of i
    cout << i <<endl;
    cout << *p <<endl;
    cout << **p2 <<endl;

    //ways to print value of p
    cout << &i <<endl;
    cout << p << endl;
    cout << *p2 << endl;

    //ways to print address of p
    cout << &p << endl;
    cout << p2 << endl;

    cout << "------------------------------------------------------" << endl;

    cout << "Before : " << i << endl;
    cout << "Before : " << p << endl;
    cout << "Before : " << p2 << endl;

    // update1(p2);
    // update2(p2);
    update3(p2);

    cout << "After : " << i << endl;
    cout << "After : " << p << endl;
    cout << "After : " << p2 << endl;


    return 0;
}