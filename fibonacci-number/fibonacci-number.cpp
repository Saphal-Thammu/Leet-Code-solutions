class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        
        if(n==1)
            return 1;
        
        
        
        
        int sum=0;
        int prev=0;
        int next=1;
        
        for(int i=2;i<=n;i++){
            sum=prev+next;
            prev=next;
            next=sum;
        }
        
        return sum;
        
        
    }
};