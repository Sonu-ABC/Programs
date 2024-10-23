#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=n;
    int k=n;
    int h=n;
    int q=n;
    int sum=0;
    int m,t=1;
    while(p>0){
        m=p%10;
        p=p/10 ;
        sum+=m;   
    }
    int rev=0;
    printf("SUM : %d \n",sum);
    while(k>0){
        int rem;
        rem=k%10;
        rev=rev*10+rem;
        k=k/10;
    }
    int max=0;
    int r;
    printf("the rev num : %d ",rev);
    while(h>0){
        r=h%10;
        if(max<r){
            max=r;
        }
        h=h/10;
    }
    int s=0;
    printf("\nMAX digit %d",max);
    int i=1,z;
    while(q>0){
       z=q%10;
       q/=10;
       if(i%2!=0){
        s+=z;}
       else{
         s-=z;
       }
       i++;
    }
printf("added sub number : %d",s);
}
