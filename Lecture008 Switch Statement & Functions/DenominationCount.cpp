
// Count no. of denominations required to make a particular amount

#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter an amount : "<<endl;
    int amt;
    cin>> amt;
    
    switch(1)
    //idea of using 1 inside switch expression is to make it reach first case.
    //after that it will continue further as there is no break
    {
        case 1: int n100;
                n100 = amt/100;
                cout<<"No. of 100rs notes "<<n100<<endl;
                amt = amt%100;
        case 2: int n50;
                n50 = amt/50;
                cout<<"No. of 50rs notes "<<n50<<endl;
                amt = amt%50;
        case 3: int n20;
                n20 = amt/20;
                cout<<"No. of 20rs notes "<<n20<<endl; 
                amt = amt%20;
        case 4: int n1;
                n1 = amt/1;
                cout<<"No. of 1rs notes "<<n1<<endl; 
    }
  
    return 0;
}
