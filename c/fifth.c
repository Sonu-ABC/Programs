#include <stdio.h>
int main(){
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    printf("give marks for maths ,phy,chem,eng,comp sci");
    scanf("%f %f %f %f %f",&m1, &m2 ,&m3 ,&m4 ,&m5);
    printf("aggregate marks is :");
    printf("%f",m1+m2+m3+m4+m5);
    printf("percentage of your examination is given below \n");
    printf("%f",(m1+m2+m3+m4+m5)/5.0);
    return 0; 



}