#include <stdio.h>
int main(){
    /*int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("%f",sum);*/
    int a,b,sum;
    a=0;
    b=1;
    sum=1;
    //printf("0");
    for(int i=1;i<=9;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}