#include <stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        fact=1;
        for (int j=1;j<=i;j++){
            fact=fact*j;
        }
        printf("factorial of %d is %d\n",i,fact);
    }
   
    
}


