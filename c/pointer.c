#include<stdio.h>
int main(){
    int a=5;
    int* b=&a;
    printf("%p\n",&b);
    printf("%p",b);
    return 0;
}