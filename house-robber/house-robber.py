class Solution:
    def rob(self, nums: List[int]) -> int:
        
        if nums is None : 
            return 0;
        
        if len(nums) is 1:
            return nums[0];
        
        n=len(nums);
        
        # rows,cols=(n,2)
        dp=[[0 for i in range(2)] for j in range(n)]
        
        dp[0][1]=nums[0]
        
        for i in range(1,n):
            dp[i][0]= max(dp[i-1][0],dp[i-1][1])
            dp[i][1]= dp[i-1][0]+nums[i]
            
        return max(dp[n-1][0],dp[n-1][1])
        
        
        
        
        