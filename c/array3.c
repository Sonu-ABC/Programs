#include <stdio.h>
int main(){
    int n,x,count;
    count=0;
    printf("Enter number of elements");
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       if(arr[i]+arr[i+1]==x){
        count+=1;
       }
    }
    printf("No.of pairs whose sum is equal to x is: %d",count);
    return 0;
}
   