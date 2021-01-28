class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        if (matrix.empty()) return matrix;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        queue<vector<int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    q.push({i,j});
                }else{
                    matrix[i][j]=-1;
                }
            }
        }
        
        vector<vector<int>> dirs ={{0,1},{0,-1},{-1,0},{1,0}};
        int distance=1; //In rotten oranges we took time variable as we had to find time here we have to find distance 
        
        while(!q.empty()){
            int count = q.size();
            
            
            for(int i=0;i<count;i++){
                vector<int> curr=q.front();
                q.pop();
                
                for(vector<int> dir : dirs){
                    int r=dir[0]+curr[0];
                    int c=dir[1]+curr[1];
                    
                    if(r>=0 && c>=0 && r<m && c<n && matrix[r][c]==-1){
                        matrix[r][c]=distance;
                        q.push({r,c});
                    }
                }
