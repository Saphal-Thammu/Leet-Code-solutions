class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        if(nums.empty()) return {};
        int abs_diff;
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            
            abs_diff=abs(nums[i])-1;
            
            if(nums[abs_diff] > 0){
                nums[abs_diff] *= -1;
                
            }
             
        }
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>0){
                result.push_back(i+1);
            }
            
        }
        return result;
        
        
    }
};
