#include<stdio.h>
int main(){
    int a,c,d;
    printf("the num to be stored in c: \n");
    scanf("%d",&c);
    printf("the num to be stored in d: \n");
    scanf("%d",&d);
    a=c;
    c=d;
    d=a;
    printf("the new num to be stored in c: %d \n",c);
    printf("the new num to be stored in d: %d \n",d);
    return 0;
}