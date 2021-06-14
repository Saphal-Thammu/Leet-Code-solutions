class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        if (nums.empty()) return {};
        
        vector<int> result;
        
        int l1=1;
        int r1=1;
        vector<int> lm(nums.size(),0); //left multiplication
        vector<int> rm(nums.size(),0); //Right Multiplication
        int lprod=1;
        int rprod=1;
        
        for(int i=0;i<nums.size();i++){
            lprod=l1*lprod;
            lm[i]=lprod;
            l1=nums[i];
        }
        
        // for(int i=0;i<nums.size();i++){
        //     cout<<lm[i];
        // }
        
        
        for(int i=nums.size()-1;i>=0;i--){
            rprod=r1*rprod;
            rm[i]=rprod;
            r1=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            result.push_back(lm[i]*rm[i]);
        }
        
        return result;
    }
};