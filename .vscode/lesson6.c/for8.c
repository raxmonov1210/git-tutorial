#include <stdio.h>

int main(){

    int S=10, b=19, yigindi;

    for(int i=S+1; i<b+1; i++){
    S*=i;
    }

    printf("kopaytma: %d\n", S);
    
    return 0;
}