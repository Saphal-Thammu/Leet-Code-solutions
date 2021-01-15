class Solution {
    public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        vector<vector<int>> result;
        
        if(nums.empty()) return {}; // or just return result becaus the result is initialised and is empty.
        
        sort(nums.begin(),nums.end());
        
        //Have low and high pointers and i has to iterate from an outer loop.
        
        if(nums.size()==1) return {};
        
        for(int i=0;i<nums.size()-2;i++){
            
            if(i>0 &&nums[i]==nums[i-1]) continue;
            int low=i+1; int high=nums.size()-1;
            
            while(low<high){
                
                int sum=nums[i]+nums[low]+nums[high];
                
                if(sum==0){
                    vector<int> b;
                    b.push_back(nums[i]);
                    b.push_back(nums[low]);
                    b.push_back(nums[high]);
                    result.push_back(b);
                    // sort(b.begin(),b.end()); Dont have to sort it again because already the nums vector is sorted
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1]) low++;
                    while(low<high && nums[high]==nums[high+1]) high--;
                    
                    
                    
                }else if(sum>0){
                    high--;
                    
