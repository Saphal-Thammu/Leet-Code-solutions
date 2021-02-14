class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        if len(s)==0:
            return 0
        
        hmap={}
        slow=0
        gmax=0
        
        for i in range(len(s)):
            char=s[i]
            
            if char in hmap:
                slow=max(slow,hmap[char]) #here we are basically if we are having a repeated character if we are finding a repeated character we have to move the pointer to the index after the previous occurence of that same variable
                
            hmap[char] =i+1
            
            gmax=max(gmax,i- slow +1) 
#here we were basically updating our result variable(gmax) to update the longest substring which changes everytime a new unique character comes 
        
        return gmax
        