#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
//T=e^y+h+ildizda|6.4*y|





int main() {

  double y=10, h=3,   T;

  T=exp(y+h)+sqrt(fabs(6.4*y));

  printf("natija: %lf\n", T );


 return 0;
}
