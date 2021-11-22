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
    bool mirror(TreeNode* root1,TreeNode* root2)
    {
        if(!root1&&!root2)return true;
        if(!root1||!root2)return false;
        // cout<<root1->val<<" "<<root2->val<<endl;
        if(root1->val!=root2->val) return false;
        bool a=mirror(root1->left,root2->right);
        bool b=mirror(root1->right,root2->left);
        return a&b;
    }
    
    bool isSymmetric(TreeNode* root) {
        return mirror(root->left,root->right);
    }
};