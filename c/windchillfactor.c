#include<stdio.h>
#include <math.h>
int main(){
    float t,v,wcf;
    printf("enter the wind velocity:");
    scanf("%f",&v);
    printf("\n enter the temp:");
    scanf("%f",&t);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("THE WIND CHILL FACTOR IS : %f",wcf);
    return 0;

    
}