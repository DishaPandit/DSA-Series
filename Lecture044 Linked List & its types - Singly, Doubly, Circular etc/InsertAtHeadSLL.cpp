#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    //contructor
    Node(int data)
    {
        this->data = data;
        this->next =  NULL;
    }
};

void insertionAtHead(Node* &head, int d)
{
    //create new node which you want to insert
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head)
{
    Node*temp =  head;
    while(temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

int main()
{
    Node* node1 = new Node(10);
    cout << node1->data <<endl;
    cout << node1->next <<endl;

    //head pointed to node1
    Node* head = node1;

    //print before insertion
    cout <<"Print before insertion : "<<endl;
    print(head);

    //print after insertion
    insertionAtHead(head,12);
    cout <<"Print after 1st insertion : "<<endl;
    print(head);

    insertionAtHead(head,15);
    cout <<"Print after 2nd insertion : "<<endl;
    print(head);

    return 0;
}