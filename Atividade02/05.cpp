#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 230. Kth Smallest Element in a BST
 * 
 **/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int aux,count=0;
public:
    int find(TreeNode* root,int k){
    
        if(root==nullptr)
            return false;
        if(find(root->left,k))  
            return true;
        count++;
        if(count==k){
            aux = root->val;
            return true;
        }
        return find(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        find(root,k);
        return aux;
    }
};