class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        if(wordList.empty()) return 0; //edge case
        
        int result=0; //returning this variable.
        int n = wordList.size(); //length of the word list vectors
        
        unordered_set<string> myset; //to check every iteration if that word is present
        for(int i=0;i<n;i++){
            myset.insert(wordList[i]); //adding vector elements in the set
        }
        
        if(myset.find(endWord) == myset.end()){ //to see if the endWord is in the hashset because we will never reach the last element if not present
            return 0;
        }
        
        string s=beginWord; 
        queue<string> q;
        q.push(beginWord);
        
        while(!q.empty()){
            result+=1;
            int size=q.size();
            for(int i=0;i<size;i++){
                
                string curr=q.front();
                q.pop();
                
                for(int j=0;j<curr.size();j++){//every alphabet we are checking for aall possible words by transitioning one character
                    string temp=curr;
                    
                    for(char c='a';c<='z';c++){
                        temp[j]=c;
                        // cout<<endWord;
                        if(temp==curr)//should not consider the same word
                            continue;
                        if(temp==endWord)//if it matches the endWord
                            return result+1;
                        if(myset.count(temp)){
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};