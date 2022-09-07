#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// G=e^2*y+sin(f)





int main() {

  double y=10, f=3,  G;

  G=exp(2*y)+sin(f);

  printf("natija: %lf\n", G );


 return 0;
}
