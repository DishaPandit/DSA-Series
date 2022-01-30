//https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
//TC - O(n*m)
//This solution gives TLE

#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
    for(int i =0; i<n; i++)
    {
        int element = arr1[i];
        for(int j =0; j<m; j++)
        {
            if(element == arr2[j])
            {
                ans.push_back(element);
                arr2[j]=INT32_MIN;
                break;
            }
        }
    }
    return ans;
}

//Method 2
/*
Optimisation 1 - if element is less than arr2[j] then break, no need to check further
coz array is given in non decreasing order. Still gives TLE

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
    for(int i =0; i<n; i++)
    {
        int element = arr1[i];
        for(int j =0; j<m; j++)
        {
            if(element < arr2[j])
                break;
            
            if(element == arr2[j])
            {
                ans.push_back(element);
                arr2[j]=INT32_MIN;
                break;
            }
        }
    }
    return ans;
}

*/

//method 3 - optimised. using single loop

/*

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    
    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
            j++;
    }
    return ans;
}

*/