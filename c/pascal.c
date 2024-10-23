#include <stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<(m-i);j++){
            printf(" ");
        }
        int n=1;
        for(int k=0;k<=i;k++){
          printf(" %d",n);
          n=n*(i-k)/(k+1);
        }
        printf("\n");
    }
}