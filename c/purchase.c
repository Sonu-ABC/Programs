#include <stdio.h>
int main(){
    char ms,g;
    int age;
    scanf("%d %c %c",&age,&ms,&g);
    if(ms=='y'){
        printf("insured");
    }
    else if(ms=='n' && g=='m' && age>30){
        printf("insured");
    }
    else if(ms=='n' && g=='f' && age>25){
        printf("insured");
    }
    else{
        printf("not insured");
    }
    return 0;
    }