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
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            arr[i]=min;
        }
    }
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("%d",max2);
}

