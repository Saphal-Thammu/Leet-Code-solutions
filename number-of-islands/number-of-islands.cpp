class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        if(grid.empty()) return 0;
        int m=grid.size(); int n=grid[0].size();
        int count =0;
        
        queue<vector<int>> q;
        
        vector<vector<int>> dirs={{0,1},{1,0},{-1,0},{0,-1}};
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count+=1;
                    q.push({i,j});
                    grid[i][j]='0';
                    
                    while(!q.empty()){
                        vector<int> curr=q.front();
                        q.pop();
                        
                        for(vector<int> dir:dirs){
                            int r=dir[0]+curr[0];
                            int c=dir[1]+curr[1];
                            
                            if(r>=0 && c>=0 && r<m && c<n && grid[r][c]=='1'){
                                //here we should not increase the count because this 1 is neighbour to the 1 we pushed in the front we are doing this for loop so that we can convert it to 0 so that next time we dont visit the same node again.
                                grid[r][c]='0';
                                q.push({r,c});
                            }
                            
                        }
                    }
                }
            }
        }
        return count;
    }
};

// class Solution {
//     int count; int m; int n;
// public:
//     int numIslands(vector<vector<char>>& grid) {
        
//         if(grid.empty()) return 0;
//         m=grid.size(); n=grid[0].size();
//         int count =0;
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]==1){
//                     count+=1;          
//                     dfs(grid,i,j);            
//                 }
//             }
//         }
//         return count;
//     }
// private:
//     void dfs(vector<vector<char>>& grid, int i, int j){
//         //base
//         if(i<0 || j<0 || i==m || j==n || grid[i][j] != 1) return;
        
//         //logic
//         grid[i][j]==0;
//         vector<int> dirs={{0,1},{1,0},{-1,0},{0,-1}};
//         for(vector<int> dir : dirs){
//             int r=dir[0]+i;
//             int c=dir[1]+j;
//             dfs(grid,r,c);
//         }
//     }
// };