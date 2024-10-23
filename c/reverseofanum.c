#include <stdio.h>
#include <math.h>
int main(){
    int count=0,m,num2,n;
    scanf("%d",&n);
    while(n>=1){
        n=n/10;//1678//167//16//1//0
        count=count+1;//1//2//3//4//5
    }
    printf("the number of digits in given number %d",count);
    /* for(int i=1;i>=n;i++){
        m=n%10;
        num2=num2+m*(pow(10,count-i));
        n=n/10;
    printf("the reverse number is : %d",num2);
    }*/
    return 0;
}