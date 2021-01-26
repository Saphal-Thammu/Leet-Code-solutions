        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i,j}); //all rotten oranges positions enter the queue
                }else if(grid[i][j]==1){
                    fresh++; // we have to count in the end if all can be rotten by decreasing everytime a fresh is rotten
                }
            }
        }
        
        
        int time=0;
        if(fresh==0) return 0;
        vector<vector<int>> dirs ={{0,1},{0,-1},{-1,0},{1,0}};
        
        while(!q.empty()){
            int size=q.size(); // this is to check the time taken
            
            for(int i=0;i<size;i++){
                vector<int> curr=q.front();
                q.pop();
                
                for(vector<int> dir : dirs ){
                    int r = dir[0] + curr[0];
                    int c = dir[1] + curr[1];
                    
                    if(r >=0 && r<m && c >=0 && c<n && grid[r][c]==1){
                        grid[r][c]=2;
                        q.push({r,c});
                        fresh--;
                    }
                }
                
            }
            time=time+1;
        }
        // if(fresh == 0) return time-1;
        // return -1;
        if(fresh != 0) return -1;
        return time-1;
          
    }
};
