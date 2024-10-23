#include <stdio.h>
int number(int n){
    if (n==1){
        printf("%d \n",1);
        return 0;
    }
    else{
        printf("%d \n",n);
    }
    return number(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    number(num);
    return 0;
    
}