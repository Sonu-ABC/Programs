#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(n+1)/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];        
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}