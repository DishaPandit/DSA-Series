#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data : "<<value <<endl;
    }
};

void insertNode(Node* &tail,int element, int d)
{
    //empty list
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        //making it circular
        newNode->next = newNode;
    }
    else{
        //non empty list
        //assuming the element is present in list

        Node* curr = tail;
        //searching the element
        while(curr->data != element)
        {
            curr = curr->next;
        }
        
        //element found at curr node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }

}

//traversal
void print(Node* tail) 
{

    Node* temp = tail;

    //empty list
    if(tail == NULL) 
    {
        cout << "List is Empty "<< endl;
        return ;
    }

    do 
    {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

void deleteNode(Node* &tail, int element)
{
    //empty list
    if(tail == NULL)
    {
        cout << "List is already empty"<<endl;
        return;
    }
    else
    {
        //non-empty list
        //assuming the element is already present

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //single node linked list
        if(curr == prev)
        {
            tail = NULL;
        }

        // >= 2 Nodes linked list
        else if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }
}

int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);
    
    insertNode(tail, 3, 4);
    print(tail);

    //deletion
    deleteNode(tail,3);
    print(tail);
    

    return 0;
}