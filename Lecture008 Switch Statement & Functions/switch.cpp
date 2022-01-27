/*
We dont write float and string value inside switch expression
If we dont use break in each case then, once a condition is satisfied, all the cases below it will get executed whether 
it is true or not
*/
#include<iostream>
using namespace std;

int main() {
    
    char ch = '1';
    int num = 1;

    cout << endl;
    switch( 2*num ) {

        case 2: cout << "First" <<endl;
                cout << " First again " <<endl;
                break;

        case '1': switch(num) {
                    case 1: cout<<" Value of num is "<< num <<endl;
                    break;
                 }
                break;

        default: cout << " It is default case" <<endl;        

    }

    cout << endl;

    return 0;
}