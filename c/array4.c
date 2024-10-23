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
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                count+=1;
            }
        }
    }
    }
    printf("%d",count);
    return 0;
}