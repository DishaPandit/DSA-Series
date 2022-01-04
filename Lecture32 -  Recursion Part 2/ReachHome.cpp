#include<iostream>
using namespace std;

void reachHome(int src, int desc)
{
    cout << "Source is "<< src <<" and destination is "<<desc <<endl;
    //base case
    if(src==desc){
        cout << "Reached destination "<<endl;
        return;
    }
    //processing
    src++;

    //recurrence relation
    reachHome(src,desc);
}

int main()
{
    int src = 0;
    int desc = 10;

    reachHome(src,desc);
    return 0;
}