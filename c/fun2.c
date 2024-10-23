#include<stdio.h>
void england();
void india();
void australia();

void england(){
    printf("You are in England");
}

void india(){
    printf("You are in India\n");
    australia();
}

void australia(){
    printf("You are in Australia\n");
    england();
}

int main(){
    india();
    printf("Done");
    return 0;
}