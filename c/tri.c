#include <stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,ar,x;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("thee area of the triangke is %f",ar);
    return 0;
}