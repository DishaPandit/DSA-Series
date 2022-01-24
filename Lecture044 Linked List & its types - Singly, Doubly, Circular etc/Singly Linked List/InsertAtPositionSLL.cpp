/*
After handling corner cases of start and end, this code works fine for insertion at start,
end or any other position.
*/

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

void insertAtTail(Node* &tail, int d)
{
    //create a new node which you will insert
    Node* temp  = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d)
{
    //insertion at start
    if(position==1)
    {
        insertionAtHead(head,d);
        return;
    }

    //for traversing till position n 
    Node* temp = head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    //insert at end
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    //create a node for the position and insertion at any middle position
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    //printing before insertion
    cout << "Printing before insertion : "<<endl;
    print(head);

    //printing after insertion
    cout << "Printing after 1st insertion : "<<endl;
    insertAtTail(tail,30);
    print(head);
    cout << "Printing after 2nd insertion : "<<endl;
    insertAtTail(tail,50);
    print(head);

    //printing in given position
    cout << "Insert at nth position : "<<endl;
    insertAtPosition(head,tail,4,100);
    print(head); 

    //verifying position of head and tail
    cout <<"head : "<<head->data <<endl;
    cout <<"tail : "<<tail->data <<endl;

    return 0;
}