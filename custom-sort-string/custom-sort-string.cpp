class Solution {
public:
    string customSortString(string S, string T) {
        
        string result;// this is the result we will return
        if(T.empty()) return result;
        
        unordered_map<char,int> map;
        
        for(int i=0;i<T.size();i++){
            char c=T.at(i);
            if(map.count(c)){      //can also write if(map.find(c) != map.end()) //here we are checking if that character is present in the string T
                map.at(c)++;
            }else{
                map.insert(make_pair(c,1));
            }
        }
        
        for(int i=0;i<S.size();i++){
            char c=S.at(i);
            
            if(map.count(c)){
                int count=map.at(c);
                while(count > 0){
                    result+=c;
                    count--;
                    
                }
                map.erase(c);                
            }
            
        }
        
        for(auto it=map.begin(); it !=map.end(); it++)
        {
            int count = it->second;
            while(count>0){
                result+=it->first;
                count--;
            }
        }      
        
        // for (auto i : m) 
        //     cout << i.first << "   " << i.second  << endl; 
        
        
        
        return result;
        
    }
};