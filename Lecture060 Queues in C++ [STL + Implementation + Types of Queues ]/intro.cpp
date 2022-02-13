//Queue follow FIFO order. First in first out

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //create a queue
    queue<int> q;

    q.push(10);
    q.push(12);
    q.push(43);

    cout <<"Front of queue is : "<<q.front() <<endl;

    cout <<"Size of queue is : "<<q.size() <<endl;

    q.pop();
    cout <<"Size of queue is : "<<q.size() <<endl;
    cout <<"Front of queue is : "<<q.front() <<endl;

    if(q.empty())
        cout <<"Queue is empty"<<endl;

    else
        cout <<"Queue is not empty"<<endl;
}
