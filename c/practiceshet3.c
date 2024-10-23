#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of numbers to be provided");
    scanf("%d",&n);
    int no;
    int max,min;
    printf("Enter 1st number\n");
    scanf("%d",&max);
    min=max;
    for(int i=0;i<n-1;i++){
        printf("Enter next number \n");
        scanf("%d",&no);
        if(no>max){
            max=no;
        }
        if(no<min){
            min=no;
        }

    }
    printf("Max no is %d ",max);
    printf("Min no is %d ",min);
}