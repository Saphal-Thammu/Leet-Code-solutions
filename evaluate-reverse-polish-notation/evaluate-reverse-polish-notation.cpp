class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        //edge case
        if (tokens.empty()) return 0;
        // vector<int> res;
        int res=0;
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            // int temp =stoi(tokens[i]);
            if(tokens[i] == "+" || tokens[i]=="-" || tokens[i]=="*"||tokens[i]=="/"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(tokens[i]=="+")
                    res=b+a;
                if(tokens[i]=="-")
                    res=b-a;
                if(tokens[i]=="*")
                    res=b*a;
                if(tokens[i]=="/")
                    res=b/a;
                
                s.push(res);
            }else{
                int temp=stoi(tokens[i]);
                s.push(temp);
            }
        }
        
        res=s.top();
        
        return res;
        
        
        
    }
};