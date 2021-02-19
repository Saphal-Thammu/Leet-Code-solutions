int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}

int maximalSquare(char** matrix, int matrixSize, int* matrixColSize){
    
    //edge
    if(matrix==NULL || matrixSize==0 || matrixColSize == NULL ) return 0;
    
    int m=matrixSize;
    int n=*matrixColSize;
    int side=0;
    
    int dp[m+1][n+1];
    
    memset(dp,0,sizeof(dp)); //memset(variable_name,value_of_variable,sizeof of variable_name)
    
    
    for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                    side=max(side,dp[i][j]);
                }
            }
        }
        return side*side;

}