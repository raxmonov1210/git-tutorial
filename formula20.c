#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// U=(e^k+y)+tgx*ildizda(y)





int main() {

  double x=10, y=3, k=2,  U;

  U=exp(k+y)+tan(sqrt(y));

  printf("natija: %lf\n", U );


 return 0;
}
