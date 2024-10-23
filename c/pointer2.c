#include<stdio.h>
int main(){
     int a=25;
     int* x;
     x=&a;
     printf("%p\n",&a);
     printf("%p\n",x);
     printf("%d",*x);
     *x=10;
     printf("%d",a);
     return 0;
}