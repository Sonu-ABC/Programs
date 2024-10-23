#include <stdio.h>
int main(){
    int amt,t;
    scanf("%d",&amt);
    t=amt/100;
    printf("the no. of 100 rupee notes required is : %d \n",t);
    amt=amt-t*100;
    t=amt/50;
    printf("the no. of 50 rupee notes required is : %d \n",t);
    amt=amt-t*50;
    t=amt/10;
    printf("the no. of 10 rupee notes required is : %d \n",t);
    amt=amt-t*10;
    t=amt/5;
    printf("the no. of 5 rupee notes required is : %d \n",t);
    amt=amt-t*5;
    t=amt/2;
    printf("the no. of 2 rupee notes required is : %d \n",t);
    amt=amt-t*2;
    t=amt/1;
    printf("the no. of 1 rupee notes required is : %d \n",t);
    return 0;


}