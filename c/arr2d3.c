#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
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
    printf("Enter no.of columns of 2nd matrix: ");
    scanf("%d",&c2);
    printf("Enter no.of rows of 2nd matrix: ");
    scanf("%d",&r2);
    int arr2[r2][c2];
    printf("Enter the matrix\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("PRINTING THE second MATRIX\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    //int arr[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}