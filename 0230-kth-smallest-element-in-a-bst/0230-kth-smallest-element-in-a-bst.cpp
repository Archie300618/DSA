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
    int cntsmall=0;
    int kthsmall=-1;
    int findsmallest(TreeNode* root,int k){
        if(root==nullptr || cntsmall>=k){
            return -1;
        }
        findsmallest(root->left,k);
        if(cntsmall>=k){
            return kthsmall;
        }
        cntsmall++;
        if(cntsmall==k){
            kthsmall=root->val;
            return kthsmall;
        }
        return findsmallest(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
       
        return findsmallest(root,k);

    }
};