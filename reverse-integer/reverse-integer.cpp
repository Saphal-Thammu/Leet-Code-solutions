class Solution {
public:
    int reverse(int x) {
        long int num = 0;
        long int digits=0;
        long int a=x;
        
        /*long int max=2147483646;
        long int min=-2147483647;*/
        
        if(x > INT_MAX || x<=INT_MIN)
        {
            return 0;
        }
        
        if(x<0)
            x=-1*x;
        while(x != 0)
        {
            digits=x%10;
            
            num=num*10+digits;
            x=x/10;
            
            if(num > INT_MAX)
                return 0;
        }
        
        if(a<0)
            num=-1*num;
        return num;
        
        
        
    }
};
