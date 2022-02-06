//Implement stack using Linked List

#include<iostream>
using namespace std;

class Node
{
    public : 
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        ~Node()
        {
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
        }
};

class Stack
{
    public : 
        Node* head;
        Node* tail;

        Stack(Node* head, Node* tail)
        {
            this->head = head;
            this->tail = tail;
        }

        //push
        void push(Node* &head,Node* &tail, int data)
        {
            if(tail==NULL)
            {
                Node* temp = new Node(data);
                tail = temp;
                head = temp;
            }
            else
            {
                Node* temp = new Node(data);
                tail->next = temp;
                tail = temp;
            }
               
        }


        //pop
        void pop(Node* &head, Node* &tail)
        {
            if(tail == NULL)
                cout <<"Stack underflow "<<endl;

            
            Node* curr = head;
            Node* prev = NULL;

            while(curr!= tail)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = NULL;
            if(curr->next == NULL)
            {
                tail = prev;
            }
            //delete curr node
            curr->next = NULL;
            delete curr;

        }


        //peak
        int peak(Node* &head, Node* &tail)
        {
            if(tail==NULL)
                return -1;

            else
                return tail->data;
        }


        //isEmpty
        bool empty(Node*head)
        {
            if(head ==NULL)
                return true;

            else
                return false;
        }

        //print
        void print(Node* &head)
        {
            Node* temp = head;
            while(temp!=NULL)
            {
                cout << temp->data <<" ";
                temp = temp->next;
            }
            cout <<endl;
        }

};

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Stack st(head, tail);

    st.print(head);
    st.push(head,tail,20);
    st.print(head);

    st.push(head,tail,30);
    st.push(head,tail,40);
    st.push(head,tail,50);
    st.push(head,tail,60);
    st.push(head,tail,70);

    st.print(head);

    if(st.empty(head))
        cout <<"Stack is empty"<<endl;

    else
        cout <<"Stack is not empty"<<endl;

    cout << "Peak is : "<<st.peak(head,tail)<<endl;

    st.pop(head,tail);
    st.print(head);

    cout << "Peak is : "<<st.peak(head,tail)<<endl;


}