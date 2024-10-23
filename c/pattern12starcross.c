#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){//1
        for(int j=1;j<n+1;j++){//1,2,3,4,5
            if(i+j==n+1||i==j){//1,1 
                printf(" * ");
            }
            else{
                printf("  ");//1,2 1,3
            }
        }
        printf("\n");
    }
}