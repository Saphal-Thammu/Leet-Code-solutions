// 

// We are using two variables one left node and the other as right node.
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base
        if(root == NULL || root == p || root== q) return root;
        
        
        //logic
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        
        if(left !=NULL && right != NULL) return root;
        else if(left != NULL) return left;
        else if(right != NULL) return right;
        else return NULL;
        
    }
    
};