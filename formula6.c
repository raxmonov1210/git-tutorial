#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// M=cos2y+3.6e^x




int main() {

  double x=10, y=3,  M;

  M=cos(2*y)+3.6*exp(x);

  printf("natija: %lf\n", M );


 return 0;
}
