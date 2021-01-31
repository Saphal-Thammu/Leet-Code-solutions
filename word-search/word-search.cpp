class Solution {
    int m ; //rows
    int n ; //columns
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        if(board.empty()) return false;
        
        m=board.size();
        n=board[0].size();
        
        // now we have to iterate through each element
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(backtrack(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
             
    }
private:
    bool backtrack(vector<vector<char>>& board, string word, int i, int j, int index){
        //here index refers to the index of each character in the string word
        
        //base
        if(index==word.size()) return true;
        if( i < 0 || j < 0 || i==m || j==n ||board[i][j] == '#') return false;
        
        //logic
        vector<vector<int>> dirs={{0,1},{-1,0},{1,0},{0,-1}};
        if(word.at(index)==board[i][j]){
            char temp=board[i][j]; // to not waste extra space to maintain a visited array or ,atrix or hashset
            
            //Action
            board[i][j]='#';
            
            // Recurse
            for( vector<int> dir : dirs){
                int r = i + dir[0];
                int c = j + dir[1];
                
                if(backtrack(board,word,r,c,index+1)){
                    return true;
                }
            }
            
            //BackTrack
            board[i][j]=temp;
        }
        return false;
        
        
    }
};