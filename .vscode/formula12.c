#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// K=7*t^2+3*sin(x^3)+9.2





int main() {

  double x=9, t=6,  K;

  K=7*pow(t, 2)+sin(pow(x, 3))+9.2;

  printf("natija: %lf\n", K );


 return 0;
}
