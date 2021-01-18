class Solution {
    vector<int> nums1;
    vector<int> nums2;
    
public:
    Solution(vector<int>& nums) {
        
        nums1=nums;
        nums2=nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        
        return nums1;
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        
        
        // nums2=copy(nums1.begin(),nums1.end());
        int n = nums2.size();
        
        if(n==0) return nums1;
        
        
        // srand(time(NULL));
        
        for(int i=n-1;i>=0;i--){
            int j = rand() % (i+1);
            swap(nums2[i], nums2[j]);
        }
        
        return nums2;
        
    }
};
​
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
