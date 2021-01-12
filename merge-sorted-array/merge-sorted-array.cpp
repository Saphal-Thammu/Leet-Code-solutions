class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(nums1.empty()) return;
       // if(nums2.empty()) return;  //dont have to check ths condition because if nums2 is empty we have to return nums 1
        
        
        // we will have three pointers
        // pointer p1s and p1g as pointers in nums 1 array 
        // p1s will start from ending of m elements of nums1 
        // p1g will start from last index of nums1 array
        // p2 will start from last element of nums 2 
        // p1s and p2 will be compared and the greater of the two will go to the index of p1g so that the greatest element will occupy the last position.
        
        int p1s=m-1; int p1g=m+n-1;
        int p2=n-1;
        
        while(p1s>=0 && p2>=0){
            if(nums2[p2]>nums1[p1s]){
                nums1[p1g]=nums2[p2];
                
                p2--;
                p1g--;
            }else{
                nums1[p1g]=nums1[p1s];
                p1s--;
                p1g--;
            }
                        
        }
        while(p2>=0){
            nums1[p1g]=nums2[p2];
            p1g--;
            p2--;
        }
        
        
    }
};
