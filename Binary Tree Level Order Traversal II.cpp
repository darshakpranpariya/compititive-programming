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
    vector<int> ans[1000];
    queue<pair<TreeNode*,int>> q;
    void search(TreeNode* root,int level){
        while(!q.empty()){
            pair<TreeNode*,int> p_temp = q.front();
            TreeNode* temp = p_temp.first;
            ans[p_temp.second].push_back(temp->val);
            level=p_temp.second+1;
            if(temp->left!=NULL){
                q.push(make_pair(temp->left,level));
            }
            if(temp->right!=NULL){
                q.push(make_pair(temp->right,level));
            }
            q.pop();
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans_final;
        if(root==NULL)
            return ans_final;
        int level=0;
        q.push(make_pair(root,level));
        search(root,level);
        for(auto i:ans){
            if(i.size()!=0)
                ans_final.push_back(i);
        }
        reverse(ans_final.begin(),ans_final.end());
        return ans_final;
    }
};
