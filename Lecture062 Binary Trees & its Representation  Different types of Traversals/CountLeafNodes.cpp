//https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055

//TC - O(n) where n is no. of nodes present in tree

#include<bits/stdc++.h>
using namespace std;

template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

void inorder(BinaryTreeNode<int>* root, int &count)        //LNR
{
    
    //base case
    if(root == NULL)
        return;

    //go to left
    inorder(root->left,count);
    
    //count leaf node
    if(root->left == NULL && root->right == NULL)
        count++;
    
    //go to right
    inorder(root->right,count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    
    int count = 0;
    inorder(root,count);
    return count;
}