/*#include <stdio.h>
int main(){
    int c,r;
    char ch;
    scanf("&d &d",&c,&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",j);
            
        }
        printf("\n");
    }
    return 0;
    
}*/
#include <stdio.h>
int main(){
    int n,m;
    printf("No. of row , columns");
    scanf("%d %d",&n,&m);
    for( int i=0;i<n;i=i+1){
        char ch='A';
        for(int j=1;j<m+1;j=j+1){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}