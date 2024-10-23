#include <stdio.h>
int main(){
    int n;//5
    scanf("%d",&n);
    int a=0,b=1,sum=1;
    printf("0 ");
    for(int i=1;i<=n-1;i++){//1 2
        printf("%d ",b);
        sum=a+b;//1 3
        a=b;//2
        b=sum;

    }
    printf("%d ",sum);
    return 0;
}