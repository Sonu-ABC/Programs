#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no.of columns of 1st matrix: ");
    scanf("%d",&c);
    printf("Enter no.of rows of 1st matrix: ");
    scanf("%d",&r);
    int arr1[r][c];
    printf("Enter the matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("PRINTING THE FIRST MATRIX\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    int l1,r1;
    printf("Enter 1st coordinate");
    scanf("%d %d",&l1,&r1);
    int l2,r2;
    printf("Enter 2nd coordinate");
    scanf("%d %d",&l2,&r2);
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum=sum+arr1[i][j];
        }
    }
    printf("%d",sum);
    return 0;}