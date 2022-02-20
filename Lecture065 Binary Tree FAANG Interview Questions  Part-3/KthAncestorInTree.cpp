//https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1/#
//TC - O(n)
//SC - O(height)

#include<iostream>
#include<limits.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

// your task is to complete this function

Node* solve(Node *root, int &k, int node)
{
    //base case
    if(root == NULL)
        return NULL;
        
    if(root->data == node)
        return root;
        
    Node *left = solve(root->left, k, node);
    Node *right = solve(root->right, k, node);
    
    //wapas jate hue apna logic lagana
    if(left != NULL && right == NULL)
    {
        k--;
        if(k <= 0)
        {
            //ye kiya taki upar ab jitne b rc ho, aur k decrement ho wo kbhi 0 nhi ho paega
            //to ye jo ans h wo lock ho gya..change ni hota chhae jitna upar chle jao 
            //rc krte hue
            k = INT_MAX;
            return root;
        }
        return left;
    }
    
    if(right != NULL && left == NULL)
    {
        k--;
        if(k <= 0)
        {
            //ye kiya taki upar ab jitne b rc ho, aur k decrement ho wo kbhi 0 nhi ho paega
            //to ye jo ans h wo lock ho gya..change ni hota chhae jitna upar chle jao 
            //rc krte hue
            k = INT_MAX;
            return root;
        }
        return right;
    }
    return NULL;
}

int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root, k, node);
    
    //second condition means ki k ki value bdi hai..us level pe koi tree exist nhi krra. imp edge case
    //agar node ko root node k equal de diya to return -1 kyuki ques me diya hai ki k>=1 hoga..aur agar hm root node pe hai
    //to usse upar thodi ja paenge
    if(ans == NULL || ans->data == node)
        return -1;
    
    else    
        return ans->data;
}


/*

Approach 2

C++ program to calculate Kth ancestor of given node 
#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct Node
{
	int data;
	struct Node *left, *right;
};

// function to generate array of ancestors
void generateArray(Node *root, int ancestors[])
{
	// There will be no ancestor of root node
	ancestors[root->data] = -1;

	// level order traversal to
	// generate 1st ancestor
	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();

		if (temp->left)
		{
			ancestors[temp->left->data] = temp->data;
			q.push(temp->left);
		}

		if (temp->right)
		{
			ancestors[temp->right->data] = temp->data;
			q.push(temp->right);
		}
	}
}

// function to calculate Kth ancestor
int kthAncestor(Node *root, int n, int k, int node)
{
	// create array to store 1st ancestors
	int ancestors[n+1] = {0};

	// generate first ancestor array
	generateArray(root,ancestors);

	// variable to track record of number of
	// ancestors visited
	int count = 0;

	while (node!=-1)
	{
		node = ancestors[node];
		count++;

		if(count==k)
			break;
	}

	// print Kth ancestor
	return node;
}

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver program to test above functions
int main()
{
	// Let us create binary tree shown in above diagram
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	int k = 2;
	int node = 5;

	// print kth ancestor of given node
	cout<<kthAncestor(root,5,k,node);
	return 0;
}


*/