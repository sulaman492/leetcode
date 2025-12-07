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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr || subRoot==nullptr){
            return root==subRoot;
        }
        if(root->val==subRoot->val){
            if(isIdentical(root,subRoot)) return true;
        }
        bool forLeft=isSubtree(root->left,subRoot);
        bool forRight=isSubtree(root->right,subRoot);
        return forLeft || forRight;
    }
    bool isIdentical(TreeNode* root, TreeNode* subRoot)
    {
        if(root==nullptr && subRoot==nullptr)return true;
        if(root==nullptr && subRoot!=nullptr)return false;
        if(root!=nullptr && subRoot==nullptr)return false;
        if(root->val!=subRoot->val)return false;
        bool isLeft=isIdentical(root->left,subRoot->left);
        bool isRight=isIdentical(root->right,subRoot->right);
        return isLeft && isRight;
    }
};