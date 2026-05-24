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
    map<int,map<int,multiset<int>>> mp;
    void dfs(TreeNode* root,int row,int col)
    {
        if(root==nullptr)
        {
            return;
        }
        mp[col][row].insert(root->val);
        dfs(root->left,row+1,col-1);
        dfs(root->right,row+1,col+1);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       dfs(root,0,0);
       vector<vector<int>> res;
       for(auto colPair:mp)
       {
         vector<int> col;
         for(auto rowPair:colPair.second)
         {
             for(int val:rowPair.second)
             {
                col.push_back(val);
             }
         }
           res.push_back(col);
       }
       return res;
        
    }
};