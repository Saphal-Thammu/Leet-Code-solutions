//             while(root!=NULL){
//                 st.push(root);
//                 root=root->left;
//             }
//             root=st.top(); // same as peek
//             st.pop(); // in C++ it just deletes
//             root=root->right;
//         }       
           // return true;
        
        
        // after writing inorder traversal implement the previous node as NULL
        // then check if the previous node value is greater than the root value
        // if the condition fails we must return fall
        //also should check the first edge case where in the beginning the previous node value is null so we must start comparing after the previous node value is not null.
        
        
​
        
        if(root==NULL) return true;
        
        TreeNode* prev = NULL; 
        
        stack<TreeNode*> st;
        
        while(root != NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            if(prev != NULL && prev->val >= root->val) return false;
            prev=root;
            
            st.pop();
            root=root->right;
        }
        
        return true;
        
    }
};
