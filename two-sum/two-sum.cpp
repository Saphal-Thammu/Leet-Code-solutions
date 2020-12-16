class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        //int a,b,c=0;
        int k=0;
        vector<int> x;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(i==j)
                    continue;
                if((nums[i]+nums[j])==target)
                {
                 k+=1;
                 x.push_back(i);
                 x.push_back(j);   
                 break;   
                 }  
                
            }
            if(k>0)
                    break;
        }
        return x;
        
    }
};
