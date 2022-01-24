#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
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

void insertAtTail(Node* &tail, int d)
{
    //create a new node which you will insert
    Node* temp  = new Node(d);
    tail->next = temp;
    tail = temp;
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

void deleteNode(Node* &head,Node* &tail, int position)
{
    //deleting start node
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;

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

        prev->next =  curr->next;

        //to place tail at correct position when we delete last node
        if(curr->next == NULL)
        {
            tail = prev;
        }
        //delete curr node
        curr->next = NULL;
        delete curr;
    }
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
    cout << "Printing after 3nd insertion : "<<endl;
    insertAtTail(tail,80);
    print(head);

    //verifying position of head and tail
    cout <<"head : "<<head->data <<endl;
    cout <<"tail : "<<tail->data <<endl;

    //Deletion
    cout <<"Printing after deletion : "<<endl;
    deleteNode(head,tail,4);
    print(head);

    //verifying position of head and tail
    cout <<"head : "<<head->data <<endl;
    cout <<"tail : "<<tail->data <<endl;


}