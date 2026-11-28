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
typedef TreeNode* Node;
int height=0,sum=0;
void calc(Node root,int x){
    if(root==nullptr){
        height=max(height,x-1);
        x=0;
        return;
    }
    calc(root->left,x+1);
    calc(root->right,x+1);
}
void fun(Node root,int x){
    if(root==nullptr)return;
   if(root->right==root->left&&root->right==nullptr&&x==height){
          sum+=root->val;
          x=0;
          return;
    }
    fun(root->left,x+1);
    fun(root->right,x+1);
}

    int deepestLeavesSum(TreeNode* root) {
        calc(root,0);
        fun(root,0);
        return sum;
    }
};