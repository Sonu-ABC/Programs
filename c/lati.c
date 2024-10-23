#include<stdio.h>
#include<math.h>
int main(){
    float d,G1,G2,L1,L2;
    printf("enter the latitude and longitude of the 1st place:\n");
    scanf("%f %f",&L1,&G1);
    printf("enter the latitude and longitude of the 2nd place:\n");
    scanf("%f %f",&L2,&G2);
    d=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("the distance between the places is %f nautical miles",d);
    return 0;
}