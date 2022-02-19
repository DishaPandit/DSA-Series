//https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1/
//TC - O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void createMapping(int inorder[], map<int,int> &nodeToIndex, int size)
    {
        for(int i = 0 ; i<size; i++)
        {
            nodeToIndex[inorder[i]] = i;
        }
    }
    
    Node* solve(int postorder[], int inorder[], int &postorderIndex, int inorderStart, int inorderEnd, int size, map<int,int> &nodeToIndex)
    {
        //base case
        if(postorderIndex < 0 || inorderStart > inorderEnd)
            return NULL;
        
        //first element at any step of postorder vector will be root
        int element = postorder[postorderIndex];
        Node* root = new Node(element);
        
        //find position of root in inorder vector
        int position = nodeToIndex[element];
        
        //move to previous index in postorder vector
        postorderIndex--;
        
        //right subtree call kyuki root index k phle wala index right part me lie krra hai..isliye right part phle call krenge
        root->right = solve(postorder, inorder, postorderIndex, position+1, inorderEnd, size,nodeToIndex);
        
        
        //left subtree call
        root->left = solve(postorder, inorder, postorderIndex, inorderStart, position-1, size,nodeToIndex);
        
        
        return root;
        
    }
    


//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    
        //we know root is at index n-1 in postorder
        int postorderIndex = n-1;
        
        
        //to make time complexity O(n) 
        map<int,int> nodeToIndex;
        createMapping(in,nodeToIndex, n);
        //0 is start index of inorder and n-1 is end index of inorder vector
        Node* ans = solve(post,in,postorderIndex, 0, n-1, n,nodeToIndex);
        return ans;
}

//Approach 2
//https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
//TC - O(n^2)

/*

class Solution {
public:
    int findPosition(vector<int> inorder, int element, int size)
    {
        for(int i = 0 ; i<size; i++)
        {
            if(inorder[i] == element)
                return i;
        }
        return -1;
    }
    
    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int &postorderIndex, int inorderStart, int inorderEnd, int size)
    {
        //base case
        if(postorderIndex < 0 || inorderStart > inorderEnd)
            return NULL;
        
        //first element at any step of postorder vector will be root
        int element = postorder[postorderIndex];
        TreeNode* root = new TreeNode(element);
        
        //find position of root in inorder vector
        int position = findPosition(inorder,element,size);
        
        //move to previous index in postorder vector
        postorderIndex--;
        
        //right subtree call
        root->right = solve(postorder, inorder, postorderIndex, position+1, inorderEnd, size);
        
        
        //left subtree call
        root->left = solve(postorder, inorder, postorderIndex, inorderStart, position-1, size);    
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
        
        
        int n = postorder.size();
        //we know root is at index n-1 in postorder
        int postorderIndex = n-1;
        
        //0 is start index of inorder and n-1 is end index of inorder vector
        TreeNode* ans = solve(postorder,inorder,postorderIndex, 0, n-1, n);
        return ans;
        
        
    }
};

*/