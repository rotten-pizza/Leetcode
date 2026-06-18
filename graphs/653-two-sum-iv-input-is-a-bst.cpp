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
 class BSTIterator {
public:
    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
        while(root){
            s.push(root);
            root=root->left;
        }
    }
    
    int next() {
        TreeNode* pivot=s.top();
        s.pop();
        int n=pivot->val;
        pivot=pivot->right;
        while(pivot){
            s.push(pivot);
            pivot=pivot->left;
        }
        return n;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};
class BSTIterator1 {
public:
    stack<TreeNode*>s;
    BSTIterator1(TreeNode* root) {
        while(root){
            s.push(root);
            root=root->right;
        }
    }
    
    int before() {
        TreeNode* pivot=s.top();
        s.pop();
        int n=pivot->val;
        pivot=pivot->left;
        while(pivot){
            s.push(pivot);
            pivot=pivot->right;
        }
        return n;
    }
    
    bool hasNex() {
        return !s.empty();
    }
};
class Solution {
public:
 
    bool findTarget(TreeNode* root, int k) {
       BSTIterator1 y(root);
       BSTIterator x(root);
       int i=x.next();
       int j=y.before();
        while(i!=j){
            if(k==i+j){return true;}
            if(k>i+j)i=x.next();
            else if(k<i+j)j=y.before();
        }
        return false;
    }
};