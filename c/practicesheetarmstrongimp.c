#include <stdio.h>
#include <math.h>
int isarm(int num){
    int on,rem,res=0,n=0;
    on=num;
    while(on!=0){
        n++;
        on/=10;
    }
    on=num;
    while(on!=0){
        rem=on%10;
        res+=pow(rem,n);
        on/=10;
    }
    return (res==num);
}

int main(){
    int n,count=0,num=1;
    printf("enter no.of armstrong numbers to print");
    scanf("%d",&n);
    printf("First %d armstrong numbers are :\n ",n);
    while(count<n){
        if(isarm(num)){
            printf("%d\n",num);
            count++;
        }
        num++;
    }
    return 0;
}