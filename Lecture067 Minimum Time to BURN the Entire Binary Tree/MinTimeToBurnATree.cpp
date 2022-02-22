//https://practice.geeksforgeeks.org/problems/burning-tree/1

//boht hard boht hard + imp
//TC - O(n) + O(n) = O(n)
//SC - O(n) + O(n) = O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  
    //create mapping for visited node and find target
    Node* createParentMapping(Node* root,int target, map<Node*,Node*> &nodeToParent)
    {
        Node* res = NULL;
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty())
        {
            Node* front = q.front();
            q.pop();
            
            if(front->data == target)
            {
                res = front;
            }
            
            if(front->left)
            {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            
            if(front->right)
            {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        
        return res;
        
    }
    
    int burnTree(Node* root, map<Node*,Node*> &nodeToParent)
    {
        map<Node*, bool> visited;
        queue<Node*> q;
        q.push(root);
        visited[root] = true;
        
        int time = 0;
        
        while(!q.empty())
        {
            //this is true if any addition is done in queue
            //so that we can increase time
            bool flag = 0;
            
            int size = q.size();
            for(int i = 0; i<size; i++)
            {
                //process neighbouring nodes
                Node* front = q.front();
                q.pop();
                
                //left exist krta ho aur visited na ho
                if(front->left && !visited[front->left])
                {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = true;
                }
                
                //right exist krta ho aur visited na ho
                if(front->right && !visited[front->right])
                {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = true;
                }
                
                //parent exist krta ho aur visited na ho
                if(nodeToParent[front] && !visited[nodeToParent[front]])
                {
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                }
            }
            if(flag == 1)
            {
                time++;
            }
        }
        return time;
    }
  
    int minTime(Node* root, int target) 
    {
        //algo : 
        //1.create nodeToParent mapping
        //2.Find target node
        //3.burn tree in min time
        
        
        map<Node*, Node*> nodeToParent;
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        
        int time = burnTree(targetNode, nodeToParent);
        
        return time;
    }
};

