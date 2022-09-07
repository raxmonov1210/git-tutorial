#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void RectPS(double x1, double y1, double x2, double y2){

    printf("peremetr1: %lf\n", (x1+y1)*2);
    printf("yuza1: %lf\n", x1*y1);
    printf("peremetr2: %lf\n", (x2+y2)*2);
    printf("yuza2: %lf\n", x2*y2);
}
    
    int main (){

        double A=4, B=6, C=5, D=9;
        RectPS(A,B,C,D);
    
        
        return 0;
    }