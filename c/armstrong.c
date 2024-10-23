#include <stdio.h>
int main(){
    for(int n=1;n<=500;n=n+1){
        int p,x,sum=0;
        p=n;
        while(p>0){
           x=n%10;
           p=n/10;
           sum=sum+(x*x*x);
        }
        if (sum==n){
            printf(" %d is an armstrong number\n",n);
        }
       
    }
    return 0;
}