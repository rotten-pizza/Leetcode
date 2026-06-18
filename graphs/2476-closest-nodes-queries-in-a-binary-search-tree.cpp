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
//  static inline auto _ = [] {
//         std::ios::sync_with_stdio(false);
//         std::cin.tie(nullptr);
//         std::ofstream out("user.out", std::ios::out | std::ios::binary);
//         out.rdbuf()->pubsetbuf(nullptr, 256);
//         std::string s;
//         std::noskipws(std::cin);
//         while (std::getline(std::cin, s)) {
//             int count = 0;
//             bool inNum = false;
//             for (char c : s) {
//                 if (std::isdigit(c) != 0) {
//                     if (!inNum) {
//                         ++count;
//                         inNum = true;
//                     }
//                 } else {
//                     inNum = false;
//                 }
//             }
//             out << count << '\n';
//         }
//         std::skipws(std::cin);
//         out.flush();
//         exit(0);
//         return 0;
//     }();
void inorder(TreeNode* root,vector<int>&store){
    if(root==nullptr)return;
    inorder(root->left,store);
    store.push_back(root->val);
    inorder(root->right,store);
}
class Solution {
public:

    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
         std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<int>check;
        inorder(root,check);
        vector<vector<int>>ans;
        for(auto &q:queries){
            int low=lower_bound(check.begin(),check.end(),q)-check.begin();
            if(check[0]>q)low=-1;
            else if(low<check.size()&&check[low]==q)low=q;
            else low=check[low-1];
            int high=upper_bound(check.begin(),check.end(),q)-check.begin();
            if(check.back()<q)high=-1;
            else if(high>0&&check[high-1]==q)high=q;
            else high=check[high];
            ans.push_back({low,high});
        }
        return ans;
    }
};