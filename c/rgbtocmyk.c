#include <stdio.h>
#include <stdlib.h>
int main(){
    float r,g,b;
    float white,cyan,magenta,yellow,black;
    white=max(r/255,g/255,b/255);
    if(r==0 && b==0 && g==0){
        black=1;
        cyan=0;
        yellow=0;
        magenta=0;
        printf("%f %f %f %f",cyan,magenta,yellow,black);
    }
    else{
    cyan=(white-(r/255))/white;
    magenta=(white-(g/255))/white;
    yellow=(white-(b/255))/white;
    black=1-white;
    printf("%f %f %f %f",cyan,magenta,yellow,black);
    }
    return 0;
}
