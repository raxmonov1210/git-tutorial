#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 21-misol

int main(){

   
    double x1=20, x2=22, x3=23, y1=60, y2=62, y3=63, L1, L2, L3, P, S;
    
    L1=sqrt((pow((x2-x1), 2))+(pow((y2-y1), 2)));
    L2=sqrt((pow((x3-x2), 2))+(pow((y3-y2), 2)));
    L3=sqrt((pow((x3-x1), 2))+(pow((y3-y1), 2)));
    P=(L1+L2+L3)/2;
    S=sqrt(P*(P-L1)*(P-L2)*P-L3);
    


   printf("L1 uzunligi: %lf\n", L1);
   printf("L2 uzunligi: %lf\n", L2);
   printf("L3 uzunligi: %lf\n", L3);
   printf("Peremetr: %lf\n", P);
   printf("Yuzasi: %lf\n", S);

    return 0;
}








