

int trap(int* height, int heightSize){
    
    if(heightSize==0) return 0;
    
    int result=0;
    int l=0;
    int r=heightSize-1;
    int lw=0;
    int rw=0;
    
    while(l<=r){
        if(lw<=rw){
            if(height[l]<lw){
                result+=1*lw-height[l];
            }else{
                lw=height[l];
            }
            l++;
            
        }else{
            if(height[r]<rw){
                result+=1*rw-height[r];
            }else{
                rw=height[r];
            }
            r--;
            
        }
    }
    
    return result;
    

}