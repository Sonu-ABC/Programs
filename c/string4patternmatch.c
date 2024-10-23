#include<stdio.h>
int main(){
    char str[100];
    char s[50];
    printf("enter the string");
   scanf("%s%s",str,s);
   // printf("enter the sub string");
   // scanf("%s",s);
  //  printf("%s",str);
  //  printf("%s",s);
    int count=0;
    for(int i=0;s[i]!='\0';i++){//c=3
        count+=1;
    }
    int l=0;
    int n=0;
    for(int i=0;str[i]!='\0';i++){//l=8
        l+=1;
    }
    for(int i=0;i<=l-count;i++){
        int x=0;
        for(int j=i;j-i<count;j++){
            if(str[j]==s[j-i]){
                x+=1;
            }
            else{
                break;
            }
        }
        if(x==count){
            n+=1;
        }
    }
    printf("No of matches found %d",n);
    return 0;
}