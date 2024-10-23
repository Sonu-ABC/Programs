#include <stdio.h>
void gm(int n){
    if (n==1){
        printf("GOOD MORNING");
    }
    else{
        return gm(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    gm(n);
}