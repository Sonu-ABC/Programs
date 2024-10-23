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
    int n,r;
    printf("Enter n and r");
    scanf("%d",&n);
    scanf("%d",&r);
    int c=comb(n,r);
    printf("\nthe result is : %d",c);
    return 0;
}