#include<stdio.h>
int fact(int x){
    int pro=1;
    for(int i=1;i<=x;i++){
        pro*=i;
    }
    return pro;
}
int comb(int n,int r){
    int res=fact(n)/(fact(r)*fact(n-r));
    return res;
}

int main(){
    int n;
    printf("Enter no.of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j<=1;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    return 0;
}