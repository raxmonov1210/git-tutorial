#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// L=1.51*cos(x^2)+2*x^3





int main() {

  double x=1, L;

  L=1.51*cos(pow(x, 2))+2*pow(x, 3);

  printf("natija: %lf\n", L );


 return 0;
}
