#include <stdio.h>
int main(){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c && c==b){
        printf("Equilateral Triangle");
    }
    else if(a==b || b==c || c==a){
        printf("Isoceles Triangle");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalen TRiangle");
        if(a*a+b*b==c*c ||  a*a+c*c==b*b  ||c*c+b*b==a*a){
        printf("Right Angled Triangle");
        }
    }
    return 0;
}