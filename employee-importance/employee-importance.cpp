//         result +=e->importance;
//         //now we have to add the importance of employee e subordinates and also their subordinates so now we have to call dfs function on them
//         for(int subId : e->subordinates){
//             dfs(subId);
//         }
//     }
// };
​
class Solution {
    
    
public:
    int getImportance(vector<Employee*> employees, int id) {
        int result=0;
        if(employees.empty()) return result;
        
        unordered_map<int,Employee*> map;
        for(Employee* e : employees){
            map.insert(make_pair(e->id,e));
        }
        
        queue<int> q;
        q.push(id);
        
        while(!q.empty()){
            //we dont need a size variable here because we are just going through their importances and adding
            int eid=q.front();
            q.pop();
            Employee* e=map[eid];
            result+= e->importance;
            
            for(int subId : e->subordinates){
                q.push(subId);
            }
        }
        
        return result;
        
    }
    
};
