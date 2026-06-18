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
public:
  int mp[2002];
    TreeNode* make(int low,int high,int &index,vector<int>&preorder,vector<int>&inorder){
        if(low>high||index>=preorder.size())return nullptr;
        TreeNode* root=new TreeNode(preorder[index]);
        index++;
        // find the preorder index in inorder array
        int pre_ind=mp[preorder[index-1]+1000];
        root->left=make(low,pre_ind-1,index,preorder,inorder);
        root->right=make(pre_ind+1,high,index,preorder,inorder);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
  vector<int>inorder=preorder;
  sort(inorder.begin(),inorder.end());
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]+1000]=i;
        }
        int index=0;
        return make(0,preorder.size()-1,index,preorder,inorder);
    }
};