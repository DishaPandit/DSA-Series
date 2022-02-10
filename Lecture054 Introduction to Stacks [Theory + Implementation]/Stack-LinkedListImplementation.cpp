// C++ program to Implement a stack
//using singly linked list
#include <bits/stdc++.h>
using namespace std;

// Declare linked list node

struct Node
{
	int data;
	Node* next;
};

Node* top;

// Utility function to add an element
// data in the stack insert at the beginning
void push(int data)
{
	
	// Create new node temp and allocate memory in heap
	Node* temp = new Node();

	// Check if stack (heap) is full.
	// Then inserting an element would
	// lead to stack overflow
	if (!temp)
	{
		cout << "\nStack Overflow";
		exit(1);
	}

	// Initialize data into temp data field
	temp->data = data;

	// Put top pointer reference into temp link
	temp->next = top;

	// Make temp as top of Stack
	top = temp;
}

// Utility function to check if
// the stack is empty or not
int isEmpty()
{
	//If top is NULL it means that
	//there are no elements are in stack
	return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{
	
	// If stack is not empty , return the top element
	if (!isEmpty())
		return top->data;
	else
		exit(1);
}

// Utility function to pop top
// element from the stack
void pop()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		exit(1);
	}
	else
	{
		
		// Assign top to temp
		temp = top;

		// Assign second node to top
		top = top->next;

		//This will automatically destroy
		//the link between first node and second node

		// Release memory of top node
		//i.e delete the node
		free(temp);
	}
}

// Function to print all the
// elements of the stack
void display()
{
	Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow";
		exit(1);
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{

			// Print node data
			cout << temp->data << "-> ";

			// Assign temp link to temp
			temp = temp->next;
		}
	}
}

// Driver Code
int main()
{
	
	// Push the elements of stack
	push(11);
	push(22);
	push(33);
	push(44);

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is "
		<< peek() << endl;

	// Delete top elements of stack
	pop();
	pop();

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is "
		<< peek() << endl;
		
	return 0;
}


//Implement stack using Linked List
/*

Mistakes I made
1. I used two class, it could have been done using one
2. I implemented LL and then stack, I had to only implement stack
3. I used insertion at tail, which gives complexity of O(n)
   But stack operations ahs complexity of O(1)
   so I should have used Insertion at head
4. I did not check stack overflow thinking that it is dynamic
   allocation. However, I should have checked if heap memory 
   becomes full.

#include<iostream>
using namespace std;

class Node
{
    public : 
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        ~Node()
        {
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
        }
};

class Stack
{
    public : 
        Node* head;
        Node* tail;

        Stack(Node* head, Node* tail)
        {
            this->head = head;
            this->tail = tail;
        }

        //push
        void push(Node* &head,Node* &tail, int data)
        {
            if(tail==NULL)
            {
                Node* temp = new Node(data);
                tail = temp;
                head = temp;
            }
            else
            {
                Node* temp = new Node(data);
                tail->next = temp;
                tail = temp;
            }
               
        }


        //pop
        void pop(Node* &head, Node* &tail)
        {
            if(tail == NULL)
                cout <<"Stack underflow "<<endl;

            
            Node* curr = head;
            Node* prev = NULL;

            while(curr!= tail)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = NULL;
            if(curr->next == NULL)
            {
                tail = prev;
            }
            //delete curr node
            curr->next = NULL;
            delete curr;

        }


        //peak
        int peak(Node* &head, Node* &tail)
        {
            if(tail==NULL)
                return -1;

            else
                return tail->data;
        }


        //isEmpty
        bool empty(Node*head)
        {
            if(head ==NULL)
                return true;

            else
                return false;
        }

        //print
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

};

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Stack st(head, tail);

    st.print(head);
    st.push(head,tail,20);
    st.print(head);

    st.push(head,tail,30);
    st.push(head,tail,40);
    st.push(head,tail,50);
    st.push(head,tail,60);
    st.push(head,tail,70);

    st.print(head);

    if(st.empty(head))
        cout <<"Stack is empty"<<endl;

    else
        cout <<"Stack is not empty"<<endl;

    cout << "Peak is : "<<st.peak(head,tail)<<endl;

    st.pop(head,tail);
    st.print(head);

    cout << "Peak is : "<<st.peak(head,tail)<<endl;


}
*/