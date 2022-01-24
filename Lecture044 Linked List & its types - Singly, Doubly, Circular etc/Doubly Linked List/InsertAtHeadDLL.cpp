#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

//traversing and printing linked list
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout <<temp->data <<" ";
        temp =  temp->next;
    }
    cout <<endl;
}

//find length of linked list
int getLength(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp!=NULL)
    {
        len++;
        temp =  temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int d)
{
    //if linked list is empty
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    int len = getLength(head);
    cout << "Length of linked list : "<<len <<endl;

    //insertion
    insertAtHead(head,20);

    //printing after insertion
    cout <<"Printing after first insertion : "<<endl;
    print(head);

    cout << "Head is at : "<<head->data <<endl;

    insertAtHead(head,30);

    //printing after insertion
    cout <<"Printing after second insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;

    insertAtHead(head,40);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;

    return 0;
}