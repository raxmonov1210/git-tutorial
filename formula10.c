#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// U=e^x+7.355*k^2+sin^2x
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 





int main() {

  double x=10, y=3, k=2,  U;

  U=exp(y)+7.355*pow(k, 2)+pow(sin(x), 2);

  printf("natija: %lf\n", U );


 return 0;
}
