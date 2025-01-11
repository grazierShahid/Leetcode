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
    vector<int> findMode(TreeNode* root) {
        unordered_map <int, int> mp;
        vector <int> res;
        
        int mx = 0;
        inorder(root, mp, mx, res);

        return res;


    }


    void inorder(TreeNode * node, unordered_map <int, int> & mp, int &mx, vector <int> &res){
        if(node == nullptr) return;

        inorder(node -> left, mp, mx, res);
        int cn = ++mp[node->val];

        if(cn > mx){
            mx = cn;
            res.clear();
            res.push_back(node->val);
        }
        else if(cn == mx){
            res.push_back(node->val);
        }

        inorder(node->right, mp, mx, res);
    }
};