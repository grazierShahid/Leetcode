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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int cn = 0;
        queue <pair<TreeNode* , int>> q;
        q.push({root, 1});
        while(!q.empty()){
            auto [node, depth] = q.front();
            cn = max(cn, depth);
            q.pop();

            if(node->left){
                q.push({node->left, depth+1});
                
            }
            if(node->right){
                q.push({node->right, depth+1});
            }

        }

        return cn;
    }
};