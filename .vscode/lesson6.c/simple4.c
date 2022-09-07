#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void MEAN(double son){

    printf("peremetr: %lf\n", (son+son+son));
    printf("yuza : %lf\n", sqrt(3)*pow(son, 2)/4);
}
    
    int main (){

        double A=4;
        MEAN(A);
        
        return 0;
    }