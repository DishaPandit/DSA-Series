//Implement stack using array

#include<iostream>
using namespace std;

class Stack
{
    public:
        int *arr;
        int top;
        int size;

        Stack(int size)
        {
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element)      //TC - O(n)
        {
            if(size - top > 1)
            {
                top++;
                arr[top] = element;
            }
            else
            {
                cout << "Stack overflow"<<endl;
            }
        }

        void pop()        //TC - O(n)
        {
            if(top >= 0)
                top--;

            else
                cout<<"Stack underflow"<<endl;
        }

        int peak()      //TC - O(n)
        {
            if(top >= 0)
                return arr[top];

            else
            {
                cout << "Stack is empty"<<endl;
                return -1;
            }
        }

        bool isEmpty()      //TC - O(n)
        {
            if(top == -1)
                return true;

            else
                return false;
        }
};

int main()
{
    Stack st(5);

    st.push(43);
    st.push(44);
    st.push(22);

    cout << "Peak is : "<<st.peak() <<endl;

    st.pop();
    cout << "Peak is : "<<st.peak() <<endl;

    st.pop();
    cout << "Peak is : "<<st.peak() <<endl;

    st.pop();
    cout << "Peak is : "<<st.peak() <<endl;

    if(st.isEmpty())
        cout <<"Stack is empty"<<endl;

    st.pop();

}