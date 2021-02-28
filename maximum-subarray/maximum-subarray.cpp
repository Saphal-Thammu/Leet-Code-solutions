// //When we just have to find maximum sum and not the starting and ending indices

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         if(nums.empty()) return 0;
        
//         int n=nums.size();
//         int gmax=0;
//         int rSum=0;
        
//         for(int i=0;i<n;i++){
//             rSum=max(rSum+nums[i],nums[i]);
//             gmax=max(rSum,gmax);
//         }
        
//         return gmax;
//     }
// };


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        int n=nums.size();
        int gmax=nums[0]; //finding the maximum subarray
        int rSum=0; //finding the runnng sum
        
        //starting and ending indices of global maximum array
        int start=0; //should change when max value changes
        int end=0;
        
        //to update global maximum start and end we must know curr start and end.
        //for curr start we will maintain pointer but the end will be i which is in the below for loop
        int curr=0; //should change when incoming element is greater than rSum
        
        for(int i=0;i<n;i++){
            
            rSum=rSum+nums[i];
            
            if(nums[i]>=rSum){
                rSum=nums[i];
                int curr=i;
            }
            
            if(gmax < rSum){
                gmax=rSum;
                start=curr;
                end=i;
            }
            
        }
        
        // cout<<start<<endl;
        // cout<<end<<endl;
        
        return gmax;
    }
};