#include<stdio.h>
int main(){
    float l;
    float b;
    float s;
    float perimeter;
    scanf("%f %f",&l,&b);
    s=(l+b);
    printf("l+b is : %f",s);
    printf("the perimeter is");
    perimeter=2*(s);
    printf("%f",perimeter);
    return 0;
}