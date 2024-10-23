#include <stdio.h>
int main(){
   int m,n,sum=0;
    scanf("%d",&n);//123
    while(n>0){
        m=n%10;//3//2//1
        if (m%2==0){
        sum=sum+m;//3//5//6
        n=n/10;//12//1//0
        }
        else{
            n=n/10;
        }

    }
    printf("the sum is %d",sum);

}