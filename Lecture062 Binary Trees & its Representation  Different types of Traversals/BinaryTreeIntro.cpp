//Binary tree - a tree which has <= 2 nodes
//Root node is at 0 level
//Level order traversal is also called Breadth First Search (BFS)
//we need a separator to print different level of trees in different line

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

void inorder(Node* root)        //LNR
{
    //base case
    if(root == NULL)
        return;

    //go to left
    inorder(root->left);
    //print node
    cout << root->data << " ";
    //go to right
    inorder(root->right);
}

void preorder(Node* root)        //NLR
{
    //base case
    if(root == NULL)
        return;

    //print node
    cout << root->data << " ";
    //go to left
    preorder(root->left);
    //go to right
    preorder(root->right);
}

void postorder(Node* root)        //LRN
{
    //base case
    if(root == NULL)
        return;

    //go to left
    postorder(root->left);
    //go to right
    postorder(root->right);
    //print node
    cout << root->data << " ";
}

int main()
{
    Node* root = NULL;
    //creating a tree
    root = buildTree(root);

    //data : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order
    cout <<"Printing level order traversal : "<<endl;
    levelOrderTraversal(root);

    cout <<"Printing inorder traversal : "<<endl;
    inorder(root);
    cout<<endl;

    cout <<"Printing preorder traversal : "<<endl;
    preorder(root);
    cout<<endl;
    
    cout <<"Printing postorder traversal : "<<endl;
    postorder(root);

}

/*
Step by step explanation - 

i/p : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

o/p :   1
        3  5
        7  11  17

1. Make a queue q

2. Push root in q                       [1                 ]

3. Push NULL in q                       [1  NULL            ]  

4. Go inside while loop because q is not empty

5. temp = q.front() = 1

6. pop q.top()                          [NULL               ]

7. temp is not NULL so go inside else 

8. print temp->data ie print 1                 ans on console at this step is      1

9. temp->left  is not NULL so push 3 in q       [NULL   3]

10. temp->right is not NULL so push 5 in q      [NULL   3   5]

11. Start second iteration for queue q

12. Now the element at q.front() is NULL

13. So temp = q.front() = NULL 

14. q.pop()                             [    ]

15. temp is NULL so we go inside if block

16. print enter and push NULL in q              [3   5   NULL]

17. start iteration 3 of while loop

18.    [3  5   NULL]

    1
    3   

19.    [5   NULL    7   11]

    1
    3 5

20.    [NULL    7   11  17]

    1
    3 5
    7 11 17

21.    [NULL]

press enter

    []

*/
