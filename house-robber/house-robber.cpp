//Recursive Solution

// class Solution {
// public:
//     int rob(vector<int>& nums) {
        
//         //edge
//         if(nums.empty()) return 0;
        
//         return helper(nums,0,0);  
        
//     }
// private:
//     int helper(vector<int>& nums,int index, int sum){
        
//         //edge
//         if(index >= nums.size()) return sum;
        
//         //logic
        
//             //not choose
//             int case1=helper(nums,index+1,sum);
        
        
//             //choose
//             int case2=helper(nums,index+2,sum+nums[index]);
        
//         return max(case1,case2);
        
        
//     }
    
    
// };


//DP 

class Solution {
public:
    int rob(vector<int>& nums) {
        
        //edge
        if(nums.empty()) return 0;
        
        
        int n =nums.size();
        vector<vector<int>> dp(n, vector<int> (2));
        
        dp[0][0]=0;
        dp[0][1]=nums[0];
        
        for( int i=1;i<n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][0] + nums[i];
        }
        
        return max(dp[n-1][0],dp[n-1][1]);
        
    }
    
};