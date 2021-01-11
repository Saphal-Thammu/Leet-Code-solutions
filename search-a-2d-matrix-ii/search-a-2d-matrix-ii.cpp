class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.empty()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
        
        //chose the last element in first row
        //traverse
        //if the target is bigger than the present element 
        //increment i and j is constant
        //else decrement j and i is constant
        int i=0;
        int j=n-1;
        while(i<m && j>=0){
            if (target==matrix[i][j]) return true;
            else if(target>matrix[i][j]){
                i++;               
                
            }else{
                j--;
                
            }
        }
        return false;
        
        
        
    }
};
