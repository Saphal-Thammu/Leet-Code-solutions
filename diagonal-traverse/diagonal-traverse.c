

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize){
    
    int m=matSize;
    int n=*matColSize;
    
    // int *res=NULL;
    int *res=(int*)malloc(sizeof(int)*m*n);
    
    int dir=1;
    int idx=0;
    int i=0;
    int j=0;
    
    *returnSize=m*n;
    
    // printf("%d",idx);
    
    if (!mat || !matSize || !matColSize || !*matColSize)
        return res;
    
    // res=malloc(sizeof(int)*m*n);
    
    
    while(idx<m*n){
        res[idx]=mat[i][j];
        if(dir==1){
            if(j==n-1){
                    i++;
                    dir=-1;
                    
            }else if(i==0){
                j++;
                    dir=-1;
            }else{
                    i--;
                    j++;
                }
                
            }else{
                if(i==m-1){
                    j++;
                    dir=1;
                }else if(j==0){
                    i++;
                    dir=1;
                }else{
                    i++;
                    j--;
                }
            }
        
        idx++;
        // printf(idx);
    }
    return res;

}