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

void deleteNode(Node* &head, Node* &tail, int value)
{
    Node* curr = head;
    Node* prev = NULL;

    //if start node has the value to be deleted
    if(curr->data == value && curr != NULL)
    {
        head = head->next;
        curr = NULL;
        delete curr;
        return;
    }

    //else search the value to be deleted
    else
    {
        //traversing till we find node having value
        while(curr != NULL && curr->data !=value)
        {
            prev =curr;
            curr = curr->next;
        }

        //reached last node, did not find the value in linked list
        // or if there is only one node
        if(curr == NULL)
            return;

        //found the value and delete the link    
        prev->next = curr->next;
        //update the tail
        tail = prev;
        //free memory
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
    deleteNode(head,tail,20);
    print(head);

    //verifying position of head and tail
    cout <<"head : "<<head->data <<endl;
    cout <<"tail : "<<tail->data <<endl;
}