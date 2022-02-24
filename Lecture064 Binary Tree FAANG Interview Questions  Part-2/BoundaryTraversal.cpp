//https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/#
//TC - O(n)
//SC - O(height)

/*

Approach -
1. left subtree print kro except leaf node
2. leave node print kro saare
3. right subtree print kro reverse me

*/

#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
public:

    void traverseLeft(Node *root, vector<int> &ans)
    {
        //base case
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return;
            
        //NLR
        ans.push_back(root->data);
        
        if(root->left)
            traverseLeft(root->left,ans);
            
        else    
            traverseLeft(root->right,ans);
        
    }
    
    void traverseLeaf(Node *root, vector<int> &ans)
    {
        //base case
        if(root == NULL)
            return;
            
        if(root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node *root, vector<int> &ans)
    {
        //base case
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return;
            
        if(root->right)
            traverseRight(root->right,ans);
            
        else
            traverseRight(root->left,ans);
            
        //reverse me print krna h isliye recursive call se wapas jaate hue push krdo
        ans.push_back(root->data);
        
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
            
        //root daal do
        ans.push_back(root->data);
        
        //left part traverse kro
        traverseLeft(root->left,ans);
        
        //traverse leaf nodes of left subtree
        traverseLeaf(root->left,ans);
        
        //traverse leaf nodes of right subtree
        traverseLeaf(root->right,ans);
        
        //right part traverse kro
        traverseRight(root->right, ans);
        
        return ans;
    }
};