#include<stdio.h>
int main(){
    float x1,y1;
    float x2,y2;
    float x3,y3;
    printf("enter the 1st point's coordinates");
    scanf("%f %f",&x1,&y1);
    printf("\nenter the 2nd point's coordinates");
    scanf("%f %f",&x2,&y2);
    printf("\nenter the 3rd point's coordinates");
    scanf("%f %f",&x3,&y3);
    float m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y1)/(x3-x1);
    printf("the slopes are %f %f",m1,m2);
    if(m1==m2){
        printf("the 3 points lie on same line\n");
    }
    else{
        printf("the 3 points do not lie on same line");
    }
    return 0;
}