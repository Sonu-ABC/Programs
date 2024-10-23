#include <stdio.h>
int main(){
    int d;
    float newd;
    printf("enter the distance");
    scanf("%d",&d);
    newd=1000*d;
    printf("distance converted to metres");
    printf("%f",newd);
    return 0;
}