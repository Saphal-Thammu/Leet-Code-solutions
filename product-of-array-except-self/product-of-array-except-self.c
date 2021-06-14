

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    
    if(numsSize==0) return 0;
    
    *returnSize=numsSize;
    
    int *result=(int*)malloc(sizeof(int)*numsSize);  //Array declaration
    
    int l1=1;
    int r1=1;
    
    int *lm=(int*)malloc(sizeof(int)*numsSize);  //Array declaration
    int *rm=(int*)malloc(sizeof(int)*numsSize);  //Array declaration
    
    int lprod=1;
    int rprod=1;
    
    for(int i=0;i< numsSize;i++){
        lprod=l1*lprod;
        lm[i]=lprod;
        l1=nums[i];
    }
    
    for(int i=numsSize-1;i>=0;i--){
        rprod=r1*rprod;
        rm[i]=rprod;
        r1=nums[i];
    }
    
    for(int i=numsSize-1;i>=0;i--){
        result[i]=lm[i]*rm[i];
    }
    
    return result;

    
    
    
    
    

}