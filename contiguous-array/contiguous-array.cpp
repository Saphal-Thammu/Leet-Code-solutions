class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        if (nums.empty()) return 0;
        int gmax=0;
        
        unordered_map<int,int> map;
        
        map.insert(make_pair(0,-1));
        int rSum=0;
        
        for(int i=0;i<nums.size();i++){
            rSum= nums[i]==0?rSum-1 :rSum+1;
            
            if(map.count(rSum))
                gmax= max(gmax,i - map.at(rSum));
            else{
                map.insert(make_pair(rSum,i));
            }
            
        }
        return gmax;      
        
        
        
                 
                   
                  
                   
        
    }
};
