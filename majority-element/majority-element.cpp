class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        if(nums.empty() ) return 0;
        
        
        unordered_map<int,int> mp;
        int max=0;
        int res=0;
        
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }else{
                mp.insert(make_pair(nums[i],1));
            }
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            
            if(it->second > max){
                max=it->second;
                res=it->first;
            }
                
            
                // int x = it->second
                // c += x*(x-1)/2;
        }
        
        return res;
        
    }
};