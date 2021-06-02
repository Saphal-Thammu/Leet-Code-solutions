class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        if (nums.size() == 0) return {};
        
        vector<int> out(nums.size(),0);
        int j=0;
        int k=1;
        
        for(int i=0;i<nums.size()/2;i++){
            out[j]=nums[i];
            j+=2;
        }
        
        for(int i=nums.size()/2;i<nums.size();i++){
            out[k]=nums[i];
            k+=2;
        }
        
        return out;
        
    }
};