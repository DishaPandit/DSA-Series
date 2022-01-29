//TC - O(n)
//SC - O(1)

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
};

void insertNode(Node* &tail,int element, int d)
{
    //empty list
    if(tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        //making it circular
        temp->next = temp;
        return;
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

bool isCircular(Node* head)
{
    //empty list
    if(head == NULL)
        return true;

    // >=1 node
    Node* temp = head;
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == NULL)
        return false;
    
    if(temp == head)
        return true;
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

    bool ans = isCircular(tail);
    if(ans)
        cout <<"Linked list is circular" <<endl;

    else
        cout <<"Linked list is non circular"<<endl;


    return 0;
}