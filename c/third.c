#include <stdio.h>
int main(){
    int bs;
    float da,hr,gs;
    printf("Enter your basic salary");
    scanf("%d",&bs);
    da=0.4*bs;
    hr=0.2*bs;
    gs=bs+da+hr;
    printf("your gross salary is  : ");
    printf("%f",gs);
    return 0;

}