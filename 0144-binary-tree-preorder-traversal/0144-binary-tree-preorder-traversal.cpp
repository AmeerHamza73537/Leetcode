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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        v.push_back(root->val);
        auto left =  preorderTraversal(root->left);
        auto right = preorderTraversal(root->right);

        v.insert(v.end(), left.begin(), left.end());
        v.insert(v.end(), right.begin(), right.end());

    return v;
    }
};