class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        unordered_map<char,int> map;
        
        //edge
        if(s.empty() || p.empty()) return result;
        
        int match=0;//will be used to check if the unique characters in anagrams matches with this match variable
        
        for(int i=0;i<p.size();i++){ // this for loop is used to add all the unique elements of the p string in the hashmap.
            char c=p[i];
            if(map.count(c)){
                map[c] +=1;
            }else{
                map[c]=1;
            }
        }
        
        for(int i=0;i<s.size();i++){
            //in
            char in=s[i];
            if(map.count(in)){
                int count=map[in];
                count--;
                if(count==0){
                    match++;
                }
                map[in]=count;
            }
            
            
            //out
            if(i >= p.size()){
                char out=s[i-p.size()];
                if(map.count(out)){
                    int count=map[out];
                    count++;
                    if(count==1){
                    match--;
                    }
                    map[out]=count;
                    
                }
            }
            
            
            //check if we got anagram
            
            if(map.size()==match){
                result.push_back(i-p.size()+1);
            }
        }
        return result;
    }
};