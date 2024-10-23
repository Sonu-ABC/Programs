#include <stdio.h>
int main(){
  int x,n=153;
  int p,sum=0;
  p=n;
  while(p>0){
           x=n%10;
           p=n/10;
           sum=sum+x*x*x;
        }
  if (sum==n){
     printf(" %d is an armstrong number\n",n);
        }
  return 0;
}