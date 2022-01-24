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

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data : "<<value <<endl;
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

void insertAtTail(Node* &tail, int d)
{
    //if the linked list is empty
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void deleteNode(Node* &head,Node* &tail, int position)
{
    //deleting start node
    if(position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;

        //free memory of start node
        //we point the node we want to delete to NULL 
        //so we wont get segmentation fault
        temp->next = NULL;
        delete temp;
    }

    //deleting any middle or last node
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < position)
        {
            //traversing to that position
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;

        //to place tail at correct position when we delete last node
        if(curr->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    int len = getLength(head);
    cout << "Length of linked list : "<<len <<endl;

    //insertion
    insertAtTail(tail,20);

    //printing after insertion
    cout <<"Printing after first insertion : "<<endl;
    print(head);

    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(tail,30);

    //printing after insertion
    cout <<"Printing after second insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(tail,40);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(tail,88);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(tail,77);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    insertAtTail(tail,67);

    //printing after insertion
    cout <<"Printing after third insertion : "<<endl;
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    //deletion at first node
    deleteNode(head,tail,1);
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    //deletion at any middle node
    deleteNode(head,tail,3);
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    //deletion at last node
    deleteNode(head,tail,5);
    print(head);
    cout << "Head is at : "<<head->data <<endl;
    cout << "Tail is at : "<<tail->data <<endl;

    return 0;
}