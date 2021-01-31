// //Normal Recursion
// //when dont chose is first and then chose.

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         if(nums.empty()) return result;
        
//         helper(nums,vector<int> {},0);
//         return result;
        
//     }

// private:
//     void helper(vector<int>& nums,vector<int> path,int index){
//         //base
//         if(index==nums.size()){
//             results.pushback(path);
//             return;
//         }
        
//         //logic
//         //dont chose
//         helper(nums,vector<int> {path},index+1);
//         //chose
//         path.pushback(nums[index]);
//         helper(nums,vector<int> {path},index+1);
        
//     }
// };



// //Normal Recursion
// //when chose is first and then dont chose.

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         if(nums.empty()) return result;
        
//         helper(nums,vector<int> {},0);
//         return result;
        
//     }

// private:
//     void helper(vector<int>& nums,vector<int> path,int index){
//         //base
//         if(index==nums.size()){
//             results.pushback(path);
//             return;
//         }
        
//         //logic
//         //chose
//         vector<int> temp=path;
//         temp.pushback(nums[index]);
//         helper(nums,temp,index+1);
        
//         //dont chose
//         helper(nums,vector<int> {path},index+1);
        
        
//     }
// };


// //Backtracking Method I

// //when dont chose is first and then chose.

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         if(nums.empty()) return result;
        
//         helper(nums,vector<int> {},0);
//         return result;
        
//     }

// private:
//     void helper(vector<int>& nums,vector<int> path,int index){
//         //base
//         if(index==nums.size()){
//             results.pushback(vector<int> {path});
//             return;
//         }
        
//         //logic
//         //dont chose
//         helper(nums,path,index+1);
//         //chose
//         path.pushback(nums[index]);
//         helper(nums,path,index+1);
        
//         //Backtracking
//         path.resize(nums.size()-1);
        
//     }
// };


// //Backtracking Method I

// //when chose is first and then dont chose.

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         if(nums.empty()) return result;
        
//         helper(nums,vector<int> {},0);
//         return result;
        
//     }

// private:
//     void helper(vector<int>& nums,vector<int> path,int index){
//         //base
//         if(index==nums.size()){
//             results.pushback(vector<int> {path});
//             return;
//         }
        
//         //logic
        
//         //chose
//         path.pushback(nums[index]);
//         helper(nums,path,index+1);
        
//         //Backtracking
//         path.resize(nums.size()-1);
        
//         //dont chose
//         helper(nums,path,index+1);
        
        
//     }
// };


//Backtracking Method II

//when chose is first and then dont chose.

class Solution {
    vector<vector<int>> result;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        if(nums.empty()) return result;
        
        helper(nums,vector<int> {},0);
        return result;
        
    }

private:
    void helper(vector<int>& nums,vector<int> path, int index){
        //base
        // if(index==nums.size()){
        //     results.pushback(vector<int> {path});
        //     return;
        // }
        
        // here we are adding everytime to the result so we dont have above condition
        result.push_back(vector<int> {path}); //because we are finding subsets and not sums
        
        //logic
        
        for(int i=index;i<nums.size();i++){
            //action
            path.push_back(nums[i]);
            //recursion
            helper(nums,path,i+1);//we should not repeat the element as we did in combination sums.
            //backtrack
            path.resize(path.size()-1);
        }
        
        
    }
};