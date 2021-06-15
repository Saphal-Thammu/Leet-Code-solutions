class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        if(mat.empty()) return {};
        
        int m=mat.size();
        int n=mat[0].size();
        
        // vector<int> res(m*n);
        
        vector<int> res;
        
        int i=0;
        int j=0;
        int idx=0;
        int dir=1;
        
        while(idx<m*n){
            res.push_back(mat[i][j]);
            // res[idx]=mat[i][j];
            if(dir==1){
                if(j==n-1){
                    i++;
                    dir=-1;
                    
                }else if(i==0){
                    j++;
                    dir=-1;
                }else{
                    i--;
                    j++;
                }
                
            }
            else{
                if(i==m-1){
                    j++;
                    dir=1;
                }else if(j==0){
                    i++;
                    dir=1;
                }else{
                    i++;
                    j--;
                }
            }
            
            idx++;
            // cout<<i<<j<<endl;
        }
        
        return res;
        
        
    }
};