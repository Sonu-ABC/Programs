#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=n;
    for(i;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    printf("hello");
    return 0;
}