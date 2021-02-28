class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(nums.empty()) return;
        
        int n=nums.size();
        int i=n-2; //we are starting from n-2 because in the belwo while loop we are checking the breacha nd for checking the breach we are checking the ith element and i+1 th element
        
        //first we have to move from last element to first element to get where the breach happens we have to put i there
        //next we should again start from end and move till i and whenever i<the number which we are moving we have to swap them
        //then next we have to reverse the elements till i pointer
        
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        
        if(i>=0){//this condition we are chcecking so that in the condition when all numbers are in increasing order from end like 7654 the answer should be 4567
            int j=n-1;
            while(nums[i]>=nums[j]){
                j--;
            }
            swap(nums[j],nums[i]);
            
        }
        
        reverse(nums,i+1,n-1);
        
    }
    
private:
    void reverse(vector<int>& nums,int l,int r){
        while(l<=r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
    }
};