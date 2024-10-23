#include <stdio.h>
#include <math.h>
int main(){
    float n1,n2,n3;
    printf("Enter 1st 3 terms a series");
    scanf("%f %f %f",&n1,&n2,&n3);
    if(n1*n3==n2*n2){
        printf("It is a GP");
        int t;
        printf("Enter no.of terms whose sum has to be printed");
        scanf("%d",&t);
        int sum=0;
        for(int i=0;i<t;i++){
            sum+=n1*pow((n3/n2),i);
        }
        printf("the sum of gp is %d",sum);
    }
    else{
        printf("not a GP");
    }

}