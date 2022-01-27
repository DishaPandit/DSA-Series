#include<iostream>
using namespace std;

//Function Signature
void printCounting(int num) {

    //Function Body 
    for(int i=1; i<=num; i++) {
        cout<< i << " ";
    }
    cout<<endl;
}

int main() {

    int n;
    cout<<"Enter a number "<<endl;
    cin >> n;

    //function Call
    printCounting(n);


    return 0;
}