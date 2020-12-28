class Solution {
    int binarySearchFirst(vector<int> nums, int target){
        int low =0;
        int high=nums.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                if (mid==0 || nums[mid]>nums[mid-1]) return mid;
                else
                    high=mid-1; //we have to keep moving towards left
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
        
    }
    
    int binarySearchLast(vector<int> nums, int target){
        int low =0;
        int high=nums.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                if (mid==nums.size()-1 || nums[mid]<nums[mid+1]) return mid;
                else
                    low=mid+1; //we have to keep moving towards right  
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
        
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty() && nums.size()==0) return vector<int>{-1,-1};
        if(target<nums[0]||target>nums[nums.size()-1]) return {-1,-1};
        int first=binarySearchFirst(nums, target);
        int last=binarySearchLast(nums, target);
        return vector<int>{first,last};
        
        
    }
};
