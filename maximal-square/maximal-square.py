class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        
        if (len(matrix)==0) : 
            return 0
        
        dp=[[0 for a in range(len(matrix[0]) +1)] for b in range(len(matrix) +1)]
        
        m,n=len(matrix),len(matrix[0])
        gmax=0
        
        for i in range(1,m+1):
            for j in range(1,n+1):
                if matrix[i-1][j-1] == '1':
                    dp[i][j]=min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]) + 1
                    gmax=max(gmax,dp[i][j])
        
        return gmax*gmax
 


        
        