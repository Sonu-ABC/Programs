#include <stdio.h>
int main(){
    int n=3;
    switch (n){
        case 1: printf("no 1");
        break;
        case 2: printf("no 2");
        break;
        case 3: printf("no 3");
        case 4: printf("no 4");
        break;
        case 5: printf("no 5");
        break;
        case 6: printf("no 6");
        break;
        default:printf("hi");
    }
    return 0;
}