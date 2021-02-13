class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty()) return 0;
        
        unordered_map<char,int> map;
        int slow=0; 
        int gmax=0;//this is to find the longest subsstring
        
        for(int i=0;i<s.size();i++){
            char c = s.at(i);
            // cout<<c;
            if(map.count(c)){
                slow=max(slow, map[c]); // here we are finding the slow pointer position whther it shall be updated or not
                map.at(c)=i+1;
            }
            // cout<<slow<<endl;
            
            map.insert(make_pair(c,i+1)); //The nw value does not get updated in c++This does not work in C++ as in JAVA in JAVA the element gts replaced if we are trying to change already present key in c++ it ignores
            // map.insert({c,i+1});// we can also write like this
            gmax= max(gmax,i-slow+1);// the +1 is because we are starting from 0
            cout<<gmax;
        }
        return gmax;
        
    }
};