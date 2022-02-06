#include<iostream>
using namespace std;

class Node{

    public : 
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head,Node* &tail, int d)
{
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    //create a new node which you will insert
    else
    {
        Node* temp  = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}
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

int main()
{
    //Node* node1 = new Node(20);
    Node* head = NULL;
    Node* tail = NULL;

    //printing before insertion
    cout << "Printing before insertion : "<<endl;
    print(head);

    //printing after insertion
    cout << "Printing after 1st insertion : "<<endl;
    insertAtTail(head,tail,30);
    print(head);
    cout << "Printing after 2nd insertion : "<<endl;
    insertAtTail(head,tail,50);
    print(head);
}