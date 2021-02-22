class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> result;
        if(matrix.empty()) return result;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int top=0;
        int right=n-1;
        int bottom=m-1;
        int left=0;
        
        while(top<=bottom && left<= right){
            //top
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            
            if(top<=bottom && left <= right){
                //right
                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                
            }
            
            right--;
            
            //bottom
            if(top<=bottom && left <= right){
                //right
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                
            }
             
            bottom--;
            
            if(top<=bottom && left <= right){
                //left
                for(int i=bottom; i>=top; i--){
                    result.push_back(matrix[i][left]);
                }
            }
        
            left++;
        }
        return result;
    }
};