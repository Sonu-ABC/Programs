#include<stdio.h>
int main(){
    typedef int* pointer;
    int* a,b;//this creates variable a of pointer type and variable b of int type
    pointer p,q=&b;//this creates 2 ponter variable
    p=&a;
    printf("%p\n",p);
    printf("%p",q);
    return 0;
}