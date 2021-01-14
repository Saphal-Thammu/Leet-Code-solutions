/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    class Pair{
        TreeNode* node;
        int value;
        
    public: 
        Pair(TreeNode* node, int value){
            this->node=node;
            this->value=value;
        }
        TreeNode* getKey(){
            return this->node;
        }
        int getValue(){
            return this->value;
        }
        
        
    };
    int sumNumbers(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        int result=0;
        int CurrSum=0;
        
         
        stack<Pair> st;
        
        while(root!=NULL || !st.empty()){
            while(root != NULL){
                CurrSum=CurrSum*10 +root->val;
                // Pair a= Pair(root,CurrSum);
                st.push(Pair(root,CurrSum)); 
                root=root->left;
            }
            Pair p=st.top();
            root = p.getKey();
            CurrSum=p.getValue();
            st.pop();
            if(root->left == NULL && root->right ==NULL){
                result+=CurrSum;
            }            
            
            root=root->right;
            
        }
        
        return result;
        
    }
};
