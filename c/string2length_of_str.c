#include <stdio.h>
int main(){
    char line[100];
    int count=0;
    scanf("%[^\n]",line);
    printf("%s",line);
    for(int i=0;line[i]!='\0';i++){
        count+=1;
    }
    printf("\n%d",count);
    return 0;
}