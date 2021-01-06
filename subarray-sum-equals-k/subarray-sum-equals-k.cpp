class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        if(nums.empty()) return 0;
        
        unordered_map<int,int> map;
        map.insert({0,1});
        
        
        int rSum=0;
        int count=0;
        
        for(int i =0; i< nums.size(); i++){
            rSum=rSum+nums[i];
            int complement = rSum - k;
            if(map.count(complement)){
                
                //auto it=map.find(complement);
                
                 count = count + map.at(complement);
                //count = count + it->second;
                //it->second+1;
            }
            
            if(map.count(rSum)){
                
                // auto it=map.find(rSum);
                // it->second +1 ;
                map.at(rSum)=map.at(rSum)+1;
                
            }else{
                map.insert({rSum,1});
                
            }
                    
        }
        return count;
        
        
        
        
        
        
    }
};
