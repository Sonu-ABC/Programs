#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,phi;
    printf("pls enter the cartisian coordinates of a pont : \n");
    scanf("%f %f",&x,&y);
    r=sqrt(x*x+y*y);
    phi=atan(y/x);
    printf("the r value is %f and the phi value is %f:",r,phi);
    return 0;


}