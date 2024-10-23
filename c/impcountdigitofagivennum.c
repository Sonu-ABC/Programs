#include <stdio.h>
int main(){
    int count=0,n;
    scanf("%d",&n);
    while(n>=1){//
        n=n/10;//1678//167//16//1//0
        count=count+1;//1//2//3//4//5
    }
    printf("the number of digits in given number %d",count);
}