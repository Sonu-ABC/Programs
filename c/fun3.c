#include<stdio.h>

int sum(int a, int b){
       return a+b;
}

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int s=sum(a,b);
    printf("The sum is : %d",s);
    return 0;
}