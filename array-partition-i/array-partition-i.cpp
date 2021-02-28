class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end()); //sorting the array because to find the minimum pair and then add we need to have the difference the least
        int result=0;
        
        for(int i=0;i<nums.size();i=i+2){
            result+=nums[i];
        }
        return result;
        
    }
};