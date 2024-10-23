#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    int** y=&x;
    printf("%d\n",a);//what a is storing 25
    printf("%p\n",&a);//what is the address of a ?
    printf("%d\n",*x);//what is the value stored in the variable whose address is stored in x?
    printf("%p\n",x);//which address is stored in x?
    printf("%p\n",&x);//what is the address of variable x?
    printf("%d\n",**y);//what is the value stored in the variable whose address is stored in y(y-->x-->a)?
    printf("%p\n",y);//which address is stored in y
    printf("%p\n",&y);//what is address of y
    return 0;
}