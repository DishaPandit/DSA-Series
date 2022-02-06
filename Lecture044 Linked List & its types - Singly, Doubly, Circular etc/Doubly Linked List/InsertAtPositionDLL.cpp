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

void insertAtHead(Node* &head, Node* &tail, int d)
{
    //if linked list is empty  
    if (head ==  NULL)
    {
         Node* temp = new Node(d);
         head = temp;
         tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &head, Node* &tail, int d)
{
    //If linked list is empty
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    //inserting at start
    if(position == 1)
    {
        insertAtHead(head,tail,d);
        return;
    }

    //for traversing till position 
    Node* temp = head;
    int count = 1;

    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    //insertion at last node
    if(temp->next == NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }

    //create a node for the position and insertion at any middle position
    Node* nodeToInsert = new Node(d);
 
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


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

    insertAtPosition(head,tail,3,200);
    print(head);

    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtPosition(head,tail,1,55);
    print(head);

    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtPosition(head,tail,7,80);
    print(head);

    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    return 0;
}