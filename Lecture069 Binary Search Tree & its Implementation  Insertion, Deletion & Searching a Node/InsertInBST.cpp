//Recursive
//TC - O(height)
//SC - O(height)

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
        this->left = NULL;
        this->right = NULL;
    }


};

Node* insertInBST(Node* root, int data)
{
    if(root == NULL)
    {
        Node* node = new Node(data);
        return node;
    }

    if(data > root->data)
        root->right = insertInBST(root->right, data);

    else
        root->left = insertInBST(root->left, data);

    return root;
        
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);

    //separator
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        //ye if condition k andar ke code ki wjh se har level different line me print ho rha hai

        if(temp == NULL)        //purana level completely traverse ho gya hai
        {
            cout <<endl;
            if(!q.empty())      //means queue still has some child element left
                q.push(NULL);
        }
        else
        {
            cout <<temp->data <<" ";
            if(temp->left)
            q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }

        
    }
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while( data != -1)
    {
        //root = krne pe hi link bnega
        root = insertInBST(root, data);
        cin >>data;
    }
}

int main()
{
    Node* root = NULL;
    cout <<"Enter data : "<<endl;
    takeInput(root);
    cout <<"Printing BST : "<<endl;
    levelOrderTraversal(root);
    return 0;

}