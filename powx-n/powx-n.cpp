//TC: log(n) where n is the power
//SC: reccursive stack if considered its logk or else its O(1)

class Solution {
public:
    double myPow(double x, int n) {
        //base
        if(n==0) return 1;
        
        
        //logic
        double temp = myPow(x,n/2);
        
        if(n%2==0) return temp*temp;
        else{
            if(n>0) return temp*temp*x;
            else return temp * temp *1/x;
        }
        
    }
};