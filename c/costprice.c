#include <stdio.h>
int main(){
    float cp,sp;
    printf("enter the cost price and selling price \n");
    scanf("%f %f",&cp,&sp);
    if(cp>sp){
        printf("loss incurred by amount");
        printf("%f",cp-sp);    
    }
    else{
        printf("congrats ! profit made");
        printf("%f",sp-cp);
    }
    return 0;
}