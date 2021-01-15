class Solution {
public:
    int maxArea(vector<int>& height) {
        
        if(height.empty()) return 0;
        
        int low=0;
        int high=height.size()-1;
        int gmax=INT_MIN;
        int area;
        
        while(low<high){
            area=min(height[high],height[low]) * (high-low);
            gmax=max(gmax,area); 
            if(height[high]>height[low]){
                low++;
            }else{
                high--;
            }
            
                
        }
        return gmax;
        
    }
};
