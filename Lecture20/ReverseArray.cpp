#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(220);
    v.push_back(201);
    v.push_back(2);

    cout<<"Array before reverse :"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reverseArray(v);
    cout<<"Array after reverse :"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
