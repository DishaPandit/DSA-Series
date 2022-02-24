//https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1/#
//also known as spiral traversal
//TC - O(n)
//SC - O(n)

//approach easy h..but code is tough..atleast for me..dry run krke krke se smjh aaega code

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

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	
    	if(root == NULL)
    	    return result;
    	    
    	//traversing level wise hence we are using queue
    	queue<Node*> q;
    	q.push(root);
    	
    	//flag to decide direction of flow
    	bool leftToRight = true;
    	
    	while(!q.empty())
    	{
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //process each level
    	    for(int i = 0; i<size ; i++)
    	    {
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //deciding if to insert left to right or right to left
    	        int index = leftToRight ? i : size-i-1;
    	        ans[index] = frontNode->data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode->left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode->right);
    	    }
    	    
    	    //change direction for next level
    	    leftToRight = !leftToRight;
    	    
    	    //store in final ans
    	    for(auto i: ans)
    	    {
    	        result.push_back(i);
    	    }
    	    
    	}
    	return result;
    }
};
