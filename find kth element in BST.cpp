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
    int kth_element,t;
    void dfs(TreeNode* root,int k){
        if(root==NULL){
            return;
        }
        dfs(root->left,k);
        t++;
        if(t==k){
            kth_element=root->val;
            cout<<kth_element;
        }
        dfs(root->right,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        kth_element=-1;
        t=0;
        dfs(root,k);
        return kth_element;
    }
};
