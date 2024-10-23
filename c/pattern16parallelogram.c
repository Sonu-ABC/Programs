#include <stdio.h>
int main(){
    int n,m;//4 4
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){//1 2
       for(int j=1;j<=n-i;j++){//1,2,3  1,2
           printf("  ");
       }
       for(int k=1;k<=m;k++){//1,2,3,4  
           printf("* ");
       }
       printf("\n");
       
    }
}