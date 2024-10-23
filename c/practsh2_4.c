#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i=i-2){//9 7 5 3
        for(int j=(n-i)/2;j>0;j--){//0 1 2 3
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=(n-1)/2;i++){
        for(int j=1;j<=((n-1)/2)-i;j++){
            printf(" ");
        }
        for(int j=1;j=i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}