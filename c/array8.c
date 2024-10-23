#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                c+=1;
            }
        }
        //printf("%d ",c);
        if(c==0){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}