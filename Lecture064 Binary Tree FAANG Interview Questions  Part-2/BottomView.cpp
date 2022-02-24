//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1/
//TC - O(n)
//SC - O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        
        //base case
        if(root == NULL)
            return ans;
            
        map<int, int> topNode;
        //int for horizontal distance
        queue<pair<Node*, int> > q;
        q.push(make_pair(root, 0));
        
        while(!q.empty())
        {
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            //ye condition check mt kro, simply element daalte jao

            //if(topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode->data;
                
            if(frontNode->left)
                q.push(make_pair(frontNode->left, hd-1));
                
            if(frontNode->right)
                q.push(make_pair(frontNode->right, hd+1));
        }
        
        for(auto i : topNode)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }

};


