#include <stdio.h>
int main(){
    int n,sum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            
            printf("%d  ",sum);
            sum=sum+2;
        }
        printf("\n");
    }
}