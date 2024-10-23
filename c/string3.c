#include<stdio.h>
int main(){
    char str[100];
    int c=0;
    scanf("%[^\n]",str);
    printf("%s",str);
    for(int i=0;str[i]!=0;i++){
          if(str[i]=='a'){
            c++;
          }
    }
    printf("\nThe no.of a are %d",c);
    return 0;
}