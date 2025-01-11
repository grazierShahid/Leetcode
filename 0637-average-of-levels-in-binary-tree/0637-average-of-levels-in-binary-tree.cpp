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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};

        queue<pair<TreeNode*, int>> q;
        vector <double> res(10001, 0);
        vector <int> l(10001, 0);
        vector <double> fuck;
        q.push({root, 0});
        // l[0] = 1;
        while(!q.empty()){
            auto [node, lev] = q.front();
            q.pop();
            l[lev]++;
            res[lev] += (double)node->val;
            if(node->left){
                q.push({node->left, lev+1});
            }
            if(node->right){
                q.push({node->right, lev+1});
            }
        }

        for(int i = 0; i < 10001; i++){
            if(l[i]){
                res[i] /= (double)l[i];
                fuck.push_back(res[i]);
            }
        }
        return fuck;


        
    }
};