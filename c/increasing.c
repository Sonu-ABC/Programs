#include <stdio.h>
void incr(int n){
    if (n==0) return;
    printf("%d\n",n);
    incr(n-1) ;
    printf("%d\n",n);
    return ;
    }
    
int main(){
    int n;
    scanf("%d",&n);
    incr(n);
    return 0;
}