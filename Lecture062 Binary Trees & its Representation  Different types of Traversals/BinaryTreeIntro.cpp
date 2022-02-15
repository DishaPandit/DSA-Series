//Binary tree - a tree which has <= 2 nodes
//Root node is at 0 level
//Level order traversal is also called Breadth First Search (BFS)

#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public : 

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout <<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    //if we enter -1 as data, we are considering it as NULL
    if(data == -1)
        return NULL;

    cout <<"Enter data of left of "<< data << endl;
    //recursive call
    root->left = buildTree(root->left);
    cout <<"Enter data of right of " <<data <<endl;
    //recursive call
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        
    }
}

int main()
{
    Node* root = NULL;
    //creating a tree
    root = buildTree(root);

}