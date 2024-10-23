#include <stdio.h>
int main(){
    int p;
    float r;
    int t;
    float si;
    printf("i will calculate simple interest\n");
    printf("enter values for p,t,r");

    scanf("%d %d %f ",&p,&t,&r);
    si=p*t*r/100;
    printf("%f",si);
    return 0;
}