#include <stdio.h>
int main(){
    int givenyear=2001;
    int year;
    scanf("%d",&year);
    int leapyr=year-givenyear/4;
    int nonleapyr=(year-givenyear)-(year-givenyear/4);
    int x=leapyr*366+nonleapyr*365+1;
    if (x%7==0){
        printf("it is sunday");
    }
    if (x%7==1){
        printf("it is monday");
    }
    if (x%7==2){
        printf("it is tuesday");
    }
    if (x%7==3){
        printf("it is wednesday");
    }
    if (x%7==4){
        printf("it is thursday");
    }
    if (x%7==5){
        printf("it is friday");
    }
    if (x%7==6){
        printf("it is saturday");
    }
    return 0;
}