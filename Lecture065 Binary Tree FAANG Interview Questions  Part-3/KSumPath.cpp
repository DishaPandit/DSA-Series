//https://practice.geeksforgeeks.org/problems/k-sum-paths/1/
//TC - O(n*height)
//SC - O(height)

#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
  public:
  
    void solve(Node *root, int k, int &count, vector<int> path)
    {
        //base case
        if(root == NULL)
            return;
            
        //jis node pe khade hai uska data daal do
        path.push_back(root->data);
        
        //left part
        solve(root->left, k, count, path);
        
        //right part
        solve(root->right, k , count, path);
        
        //check for k sum
        int size = path.size();
        int sum = 0;
        for(int i = size-1; i>=0; i--)
        {
            sum = sum + path[i];
            if(sum == k)
                count++;
        }
        
        //rc se wapas jate tym last added node ko hatana bhi hai
        path.pop_back();
    }
  
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count = 0;
        
        solve(root, k, count, path);
        return count;
    }
};