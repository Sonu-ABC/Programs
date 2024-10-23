#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter no.of columns of 1st matrix: ");
    scanf("%d",&c1);
    printf("Enter no.of rows of 1st matrix: ");
    scanf("%d",&r1);
    int arr1[r1][c1];
    printf("Enter the matrix\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("PRINTING THE FIRST MATRIX\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            sum=sum+arr1[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
