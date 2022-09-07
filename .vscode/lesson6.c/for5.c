#include <stdio.h>

int main(){

    double narxi=12.3, i;

    for( i=0.1; i<1.1; i+0.1){
        printf("%lf kg konfet %.1lf so'm\n", i, i*narxi);
    }


    return 0;
}