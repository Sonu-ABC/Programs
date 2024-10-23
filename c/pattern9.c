#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2==0){
            char ch='A';
            for(int j=1;j<i+1;j++){
            printf("%c ",ch);
            ch++;
        }
        }
        else{
            for(int j=1;j<i+1;j++){
            printf("%d ",j);
        }
        
        }
        printf("\n");
    }
}