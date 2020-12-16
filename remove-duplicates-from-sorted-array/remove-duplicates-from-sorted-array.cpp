class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                k++;
            }
            else if(k)
            {
                nums[i-k]=nums[i];
            }
        }
        
     
        
        nums.resize(nums.size()-k);
        
        for(int j=0;j<nums.size();j++)
        {
            std::cout<<nums[j]<<"\n";
        }
        
        
        return nums.size();
    }
};
