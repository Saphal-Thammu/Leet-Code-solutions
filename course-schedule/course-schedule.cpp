class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        // if(prerequisites.empty()) return false;
        vector<int> indegrees(numCourses,0); // to store the dependencies values
        queue<int> q; //this is the output in the end which ahs to be compared with the number of courses
        unordered_map<int,vector<int>> map; //here instead of checking the whole vector of vectors for the time complexity of O(1) in finding a dependency we have an ADJACENCY matrix to know the relations of the input given
        
        for(vector<int> edge:prerequisites){
            if(!map.count(edge[1])){
                map.insert(make_pair(edge[1],vector<int>()));
            }
            map.at(edge[1]).push_back(edge[0]);
            indegrees[edge[0]]++;
        }
        
        for(int i=0;i< indegrees.size();i++){
            
            if(indegrees[i]==0){
                q.push(i);
            }
            
        }
        
        int count=0;   // this is to know whether our answer is true or false     
        if(q.empty()) return false;
        
        while(!q.empty()){
            // int count=q.size();
            vector<int> temp;
            int curr=q.front();
            q.pop();
            count++;
            temp=map[curr];
            if(!temp.empty()){
                for(int temp_number : temp){
                    indegrees[temp_number]--;
                    if(indegrees[temp_number]==0){
                        q.push(temp_number);
                    }
                }
            }
            
        }
        if(count==numCourses){
            return true;
        }
        return false;       
    }
};
