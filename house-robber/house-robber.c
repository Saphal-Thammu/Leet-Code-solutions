int max(int x, int y){
    if (x>y)
        return x;
    else
        return y;
}

int rob(int* nums, int numsSize){
    
    if(nums==NULL || numsSize<1) return 0;
    
    // int* dp=(int*)malloc(numsSize*2*sizeof(int));
    
    
    
    int *dp[numsSize];
    for (int i=0; i<numsSize; i++)
         dp[i] = (int *)malloc(2 * sizeof(int));
    
    dp[0][0]=0;
    dp[0][1]=nums[0];
    
    for(int i=1;i<numsSize;i++){
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][1]=dp[i-1][0] + nums[i];
    }
    
    return max(dp[numsSize-1][0],dp[numsSize-1][1]);
    
    return 0;

}