//https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
//TC - O(n)
//SC - O(n)
//hard ques

#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //map to store horizontal distance, level, data at that level 
        map<int, map<int, vector<int> > > nodes;

        //queue that store node, hd, level
        queue<pair<Node*, pair<int,int> > > q;
        vector<int> ans;
        
        if(root == NULL)
            return ans;
            
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty())
        {
            pair<Node*, pair<int,int> > temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hDistance = temp.second.first;
            int level = temp.second.second;
            
            //map
            nodes[hDistance][level].push_back(frontNode->data);
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hDistance-1, level+1)));
                
            if(frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hDistance+1, level+1)));
             
        }
        
        for(auto i : nodes)
        {
           for(auto j : i.second)
           {
               for(auto k : j.second)
               {
                   ans.push_back(k);
               }
           }
        }
        
        return ans;
    }
};

