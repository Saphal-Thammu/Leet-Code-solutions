// BFS
​
// The below solution of BFS Queue inserts a vector of coordinates.
​
// 
// Below BFS Solution inserts row and column separately and while popping we have to do it twice.
​
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        // vector<vector<int>> result;
        if(image.empty() || image[sr][sc]==newColor) return image;
        
        int OriginalColor=image[sr][sc];
        
        int m=image.size();
        int n=image[0].size();
        
        queue<int> q;
        q.push(sr);
        q.push(sc);
        image[sr][sc]=newColor;
        vector<vector<int>> dirs={{0,1},{0,-1},{1,0},{-1,0}};
        
        while(!q.empty()){
            int r=q.front();
            q.pop();
            
            int c=q.front();
            q.pop();
            
            for(vector<int> dir : dirs){
                int dr=dir[0]+r;
                int dc=dir[1]+c;
                
                if(dr>=0 && dc>=0 && dr<m && dc<n && image[dr][dc]==OriginalColor){
                    image[dr][dc]=newColor;
                    q.push(dr);
