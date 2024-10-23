#include <stdio.h>
int main(){
    int n=0;
    int sum=0;
    while(n!=-1){
        printf("Enter number");
        scanf("%d",&n);
        if (n>=0){
            sum+=n;
        }
    }
    printf("Done");
    printf("The sum is %d",sum);
    
}