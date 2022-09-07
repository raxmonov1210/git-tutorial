#include <stdio.h>
#include <math.h>

int main(){

    int S=0, n=10;

    for(int i=S; i<n+1; i++){
    S+=pow((n+i), 2);
    }

    printf("kopaytma: %d\n", S);
    
    return 0;
}