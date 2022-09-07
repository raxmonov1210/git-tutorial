#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
//N=3*y^2+ildizda|y+1|





int main() {

  double y=10,  N;

  N=3*pow(y, 2)+sqrt(fabs(1+y));

  printf("natija: %lf\n", N );


 return 0;
}
