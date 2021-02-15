// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//         vector<TreeNode*> path1;
//         vector<TreeNode*> path2;
        
//         backtrack(root,p,path1);
//         backtrack(root,q,path2);
        
// //         for(auto it:path1)
// //         cout<<it;
        
// //         cout<<endl;
// //         // cout<<2;
        
// //         for(auto it:path2)
// //         cout<<it;
        
//         for(int i=0;i<path1.size();i++){
//             if(path1.at(i) != path2.at(i)){
//                 return path1.at(i-1);
//             }
//         }
//         return NULL; 
        
//     }
    
// private:
//     void backtrack(TreeNode* root, TreeNode* p,vector<TreeNode*> path){
//         //base
//         if(root==NULL) return; // when we reach the end
        
//         if(root==p){
//             path.push_back(root); // this is to remove the overhead of checking the size while finding the LCA because we have two same nodes we will surely get false when check each node of path1 and path2
//         }
        
//         //logic
//         //action
//         path.push_back(root);
        
//         //recursion
//         backtrack(root->left,p,path);
//         if(path.at(path.size()-1) ==  p) return;
        
//         backtrack(root->right,p,path);
//         if(path.at(path.size()-1) ==  p) return;
        
//         //backtrack
        
//         path.resize(path.size()-1);
//     }
    
// }; 

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