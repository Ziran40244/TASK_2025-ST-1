#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
int *nums;
int *flag;

void find(int level){
    if(level==n){
        for(int i=0;i<n;i++){
            printf("%d ",nums[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(flag[i-1]==0){        
            flag[i-1]=1;       
            nums[level]=i;   
            find(level+1);    
            flag[i-1]=0;       
        }
    }
}

int main(){
    scanf("%d",&n);
    // n=4;
    nums=(int *)malloc(n*sizeof(int));
    flag=(int *)malloc(n*sizeof(int)); 
    memset(flag,0,n*sizeof(int));
    find(0);
    free(nums);
    free(flag);
    return 0;
}
