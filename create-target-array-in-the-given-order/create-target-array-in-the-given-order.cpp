class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        if( nums.empty()) return {};
        
        vector<int> a(nums.size(),-1);
        
        
        for(int i=0;i<nums.size();i++){
            
            int num=nums[i];
            int ind=index[i];
            
            if(a[ind]<0)
                a[ind]=num;
            else{
                for(int j=nums.size()-1;j>ind;j--){
                    a[j]=a[j-1];
                }
                a[ind]=num;
            }
            
            
            
        }
        
        return a;
        
    }
};