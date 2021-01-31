// //Normal Recursion
//             // When we dont choose first and then chose 


// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         if(candidates.empty()) return result;
        
//         helper(candidates, vector<int> path, 0, target);
        
//     }
// private:
//     void helper(vector<int>& candidates,vector<int> path, int index, int target){
//         //base
//         if(index==candidates.size() || target<0) return;
//         if(target==0){
//             results.push_back(path);
//             return;
//         }
        
//         //logic
//         //dont chose
//         helper(candidates, vector<int> path, index+1,target);
//         //chose
//         path.push_back(candidates[i]);
//         helper(candidates, vector<int> path, index,target-candidates[index]);
        
//     }
    
// };


// //Normal Recursion 
// //              when we write chose first and then dont chose.

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         if(candidates.empty()) return result;
        
//         helper(candidates, vector<int> path, 0, target);
        
//     }
// private:
//     void helper(vector<int>& candidates,vector<int> path, int index, int target){
//         //base
//         if(index==candidates.size() || target<0) return;
//         if(target==0){
//             results.push_back(path);
//             return;
//         }
        
//         //logic
//         //chose    
//         // path.push_back(candidates[i]); // if we use chose case first the element will be already be present in path so we will get wrong answer when we go for dont chose case. we need to take care about the element which is added for chose condition. 
//         // to overcome we need have a temp vector and add that for chose condition
//         vector<int> temp=path;
//         temp.push_back(candidates[i]);
//         helper(candidates, temp, index,target-candidates[index]);
//         //dont chose
//         helper(candidates, vector<int> path, index+1,target);        
//     }
    
// };



// //Bactracking Method - I 

// //the main basics of backtracking is 
// //Action
// //Recurse
// //Backtrack

// class Solution {
//     vector<vector<int>> result;
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         if(candidates.empty()) return result;
        
//         helper(candidates, vector<int> path, 0, target);
        
//     }
// private:
//     void helper(vector<int>& candidates,vector<int> path, int index, int target){
//         //base
//         if(index == candidates.size() || target < 0) return;
//         if(target == 0){
//             results.push_back(vector<int> path);// we need a new path here because when we return after every recursion or when we pop we remove the element or delete the last element so eventually when we come to the first element which entered the recursive stack we will have only one element and then once we pop that, we will have an empty array hence, we mist maintain a new path storing the result;
//             return;
//         }
        
//         //logic
//         //dont chose
//         helper(candidates, path, index+1,target); //Action
//         //chose
//         path.push_back(candidates[i]); // Recurse
//         helper(candidates, path, index,target-candidates[index]);
        
//         //Backtrack
//         path.resize(path.size()-1);
        
//     }
    
// };


//Bactracking Method - II
//The Pivot Backrun method - Iterative Method  

//the main basics of backtracking is 
//Action
//Recurse
//Backtrack

class Solution {
    vector<vector<int>> result;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        if(candidates.empty()) return result;
        
        helper(candidates,vector<int> {}, 0, target);
        return result;
        
    }
private:
    void helper(vector<int>& candidates,vector<int> path, int index, int target){
        
        //base
        
        if(target < 0) return; //need not check boundary conditions of index because we are already checking in the below for loop
        if(target==0){
            result.push_back(vector<int> {path});
            return;
        }
            
            
        //logic
            
        for(int i=index;i<candidates.size();i++){ // the i has to start from index which is pivot
            //action
            path.push_back(candidates[i]); 
            //recursion
            helper(candidates,path,i,target-candidates[i]); // here index has to start from i because we have to take that pivot and go ahead find all the other possible paths
            //backtrack
            path.resize(path.size()-1);
        }

        
        
    }
    
};

