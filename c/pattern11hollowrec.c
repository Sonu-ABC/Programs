#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0||i==r-1||j==0||j==c-1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}