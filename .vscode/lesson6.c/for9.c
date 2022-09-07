#include <stdio.h>
#include <math.h>

int main(){

    int S=1, b=10;

    for(int i=S+1; i<b+1; i++){
    S+=pow(i, 2);
    }

    printf("kopaytma: %d\n", S);
    
    return 0;
}