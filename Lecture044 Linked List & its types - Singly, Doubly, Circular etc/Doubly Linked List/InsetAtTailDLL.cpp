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

void insertAtTail(Node* &head,Node* &tail, int d)
{
    //if the linked list is empty
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    int len = getLength(head);
    cout << "Length of linked list : "<<len <<endl;

    //insertion
    insertAtTail(head,tail,20);

    //printing after insertion
    cout <<"Printing after first insertion : "<<endl;
    print(head);

    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(head,tail,30);

    //printing after insertion
    cout <<"Printing after second insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(head,tail,40);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    return 0;
}