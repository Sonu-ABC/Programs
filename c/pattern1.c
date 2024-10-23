#include <stdio.h>
int main(){
    int n,m;
    printf("No. of row , columns");
    scanf("%d %d",&n,&m);
    for( int i=0;i<n;i=i+1){
        for(int j=1;j<m+1;j=j+1){
            printf("%d ",j );
        }
        printf("\n");
    }
}