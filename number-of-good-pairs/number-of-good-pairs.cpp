class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        
        if(nums.empty()) return 0;
        
        unordered_map <int,int> map;
        int count=0;
        
        for (int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                map.at(nums[i])+=1;
                // cout<<nums[i];
            }
            else{
                map.insert({nums[i],1});
            }
                
        }
        
        for(auto i=map.begin(); i != map.end();i++){
            
            // cout<<i->first<<"  "<<i->second<<endl;
            int n=i->second;
            count += (n*(n-1)) /2;
        }
        
        return count;
        
    }
};