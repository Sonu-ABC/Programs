#include <stdio.h>
int main(){
    float r,peri,arear,areac,cir;
    float l;
    float b;
    scanf("%f %f %f",&r,&b,&l);
    printf("length is %f breadth is %f",l,b);
    peri=2*l+2*b;
    cir=2*3.14*r;
    arear=l*b;
    areac=3.14*r*r;
    printf("\narea of rectangle is\n");
    printf("%f",arear);
    printf("\nperimeter of rectangle is\n");
    printf("%f",peri);
    printf("\narea of circle\n");
    printf("%f",areac);
    printf("\ncircumference of circle");
    printf("%f",cir);
    printf("\nWORK DONE");
    return 0;

}