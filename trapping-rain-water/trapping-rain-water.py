class Solution:
    def trap(self, height: List[int]) -> int:
        
        if len(height) == 0:
            return 0
        
        result=0
        l=0;
        r=len(height)-1;
        lw=0;
        rw=0;
        
        while l<=r:
            if lw<=rw:
                if height[l] < lw:
                    result+= 1*lw-height[l]
                else:
                    lw=height[l]
                l+=1
                
                
            else:
                if height[r] < rw:
                    result+= 1*rw-height[r]
                else:
                    rw=height[r]
                r-=1
                
        
            
            
        return result
        