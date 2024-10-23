#include<stdio.h>
#include<string.h>

int main(){
    typedef int integer;
    integer n=10;
    printf("%d\n",n);
   typedef struct students
    {int roll;
    int class;
    float marks;
    char name[50];
    } st;
    st sonu;
    sonu.roll=10;
    sonu.class=11;
    sonu.marks=100.0;
    strcpy(sonu.name,"HIMI");
    printf("%d\n",sonu.roll);
    printf("%d\n",sonu.class);
    printf("%s\n",sonu.name);
    return 0;
    

    
}