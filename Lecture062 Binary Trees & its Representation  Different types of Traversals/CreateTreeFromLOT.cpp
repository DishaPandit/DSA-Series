//create tree from level order traversal

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

void buildFromLevelOrder(Node* &root)
{
    queue<Node*> q;
    cout << "Enter a data for root "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout <<"Enter left node for "<<temp->data <<endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout <<"Enter right node for "<<temp->data <<endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }

    }
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

int main()
{
    Node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    //data : 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
}