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
    int min,max,minc,minr,maxc,maxr;
    max=min=arr1[0][0];
    minc=minr=maxc=maxr=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(arr1[i][j]>max){
                max=arr1[i][j];
                maxc=j;
                maxr=i;
            }
            if(arr1[i][j]<min){
                min=arr1[i][j];
                minc=j;
                minr=i;
            }
        }
    }
    printf("max elements is %d its index position is %d %d",max,maxr,maxc);
    printf("min elements is %d its index position is %d %d",min,minr,minc);
    return 0;
}