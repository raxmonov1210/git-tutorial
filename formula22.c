#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// T=sin(2u)*ln(2*y^2+ildizda(x)






int main() {

  double x=10, y=3, u=2,  T;

  T=sin(2*u)*log(2*pow(y, 2)+sqrt(x));

  printf("natija: %lf\n", T );


 return 0;
}
