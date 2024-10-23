#include <stdio.h>
int isper(int num){
  int sum=0;
  for(int i=1;i<num;i++){
    if(num%i==0){
      sum+=i;
    }
  }
  return(sum==num);
}
int main(){
    int n,count=0,num=1;
    printf("Enter no of perfect numbers to show :");
    scanf("%d",&n);
    printf("The first %d perfect numbers are : ",n);
    while (count<n){
        if (isper(num)){
          printf("%d \n",num);
          count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}