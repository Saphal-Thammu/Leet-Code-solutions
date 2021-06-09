// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
        
        
//         if(nums.empty()) return 0;
        
//         int lsum=0;
//         int rsum=0;
//         int res=0;
        
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<i;j++){
//                 lsum+=nums[j];
//             }
//             for(int j=nums.size()-1;j>i;j--){
//                 rsum +=nums[j];
//             }
            
//             if(lsum==rsum){
//                 res=i;
//                 break;
//             }
                
//             else
//                 res=-1;
            
//             lsum=0;
//             rsum=0;    
//         }
        

//         return res;
//     }
// };


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        if (nums.size() == 0) {
            return -1;
        }
        
        if (nums.size() == 1) {
            return 0;
        }
        
        int sum = 0;
        for (auto num : nums) {
            sum += num;
        }
        
        int prior = 0;
        int sumL = 0;
        int sumR = sum;

        for (int i = 0; i < nums.size(); i++) {
            sumL += prior;
            sumR -= nums[i];
            if (sumL == sumR) {
                return i;
            }
            prior = nums[i];
        }
        
        return -1;
    }
};