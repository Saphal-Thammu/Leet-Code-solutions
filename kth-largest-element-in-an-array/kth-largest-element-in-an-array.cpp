// TC: O(nlogk) if using minHeap whereas O(nlog(n-k)) if using maxHeap
// SC: O(k) if using minHeap whereas O(n-k) if using maxHeap
// whenever we are finding the largest always use min Heap and if finidng smallest use maxHeap. 


// //using minHeap

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
        
//         if(nums.empty()) return 0;
        
//         priority_queue<int,vector<int>,greater<int>> pq;
//         for(int num:nums){
//             pq.push(num);
//             if(pq.size() > k){
//                 pq.pop();
//             }
            
//         }
//         return pq.top();
        
        
        
//     }
// };


//using maxHeap

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        if(nums.empty()) return 0;
        int n =nums.size();
        int gmin = INT_MAX;
        priority_queue<int> pq;
        for(int num:nums){
            pq.push(num);
            if(pq.size() > n-k){
                gmin=min(gmin,pq.top());
                pq.pop();
            }
            
        }
        return gmin;
        
        
        
    }
};