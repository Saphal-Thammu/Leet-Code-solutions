//         dfs(root->left,root,depth+1,x,y);
//         //st.pop()
//         dfs(root->right,root,depth+1,x,y);
         
               
//     }    
// };
​
class Solution {
​
public:
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q; //in BFSwe have a queue
        q.push(root); //first we must push the node in the queue
        
        while(!q.empty()){
            int size=q.size();
            bool x_found=false;
            bool y_found=false;
            
            for(int i=0; i<size; i++){
                
                TreeNode* curr=q.front(); //in JAVA this is TreeNode curr=q.poll()
                q.pop();
                
                if(curr->val==x) x_found=true;
                if(curr->val==y) y_found=true;
                if(curr->left != NULL && curr->right != NULL){
                    if(curr->left->val == x && curr->right->val ==y) return false;
                    if(curr->left->val == y && curr->right->val ==x) return false;
                }
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right); 
            }
            if(x_found== true && y_found==true) return true;
            if(x_found== true || y_found==true) return false;
            
        }
        return false;
        
    }
        
  
};
