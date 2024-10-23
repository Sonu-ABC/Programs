#include <stdio.h>
int main(){
    char g;
    int ye,q;
    printf("enter m:male f:female \n enter 1:post-graduate 0:graduate\n");
    scanf("%c %d %d",&g,&ye,&q);
    if(g=='m'){
        if(ye>=10 && q==1){
            printf("salary : 15000");
        }
        else if (ye<10 && q==1){
            printf("salary : 10000");
        }
        else if(ye<10 && q==0){
            printf("salary : 7000");
        }
        else if(ye>=10 && q==0){
            printf("salary : 10000");
         }
    }
    if(g=='f'){
        if(ye>=10 && q==1){
            printf("salary : 12000");
        }
        else if (ye<10 && q==1){
            printf("salary : 9000");
        }
        else if(ye<10 && q==0){
            printf("salary : 10000");
        }
        else if(ye>=10 && q==0){
            printf("salary : 6000");
         }
    }
    return 0;

}