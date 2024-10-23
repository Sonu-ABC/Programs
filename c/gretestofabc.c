#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 integers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if (a>c){
            printf("\nthe greatest number is: %d",a); 
        }
        else{
         printf("\n the greatest num is %d",c);
        }
    }
    else{
        if (b>c){
            printf("\n the greatest number is %d",b);
        }
        else{
            printf("\n the greatest num is %d",c);
        }
    }
    return 0;
    }

    
