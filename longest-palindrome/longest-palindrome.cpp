class Solution {
public:
    int longestPalindrome(string s) {
        
        if(s.length()==0) return 0;
        
        int count =0;
        
        unordered_set<char> set;
        
        for(int i=0;i<s.length();i++){
            char c = s.at(i);
            if(set.find(c) != set.end()){
                set.erase(c);
                count+=2;
            }else{
                set.insert(c);
            }
        }
        if(!set.empty())
            count+=1;
        
        return count;
        
    }
};
