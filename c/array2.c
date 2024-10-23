#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nMaximum number is :");
    printf("%d",max);
    return 0;
}