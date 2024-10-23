#include<stdio.h>
int swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    return a,b;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a,b=swap(a,b);
    printf("The swapped values are %d %d",a,b);
}