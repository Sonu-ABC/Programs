#include <stdio.h>
int main(){
 int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 int m;
    printf("Enter number of shifts");
    scanf("%d",&m);   
    for(int j=0;j<m;j++){
       int temp=arr[n-1];
       for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
       }
       arr[0]=temp;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    return 0;
}