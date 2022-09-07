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
// P=(e^(y+5.5))+9.1h^3





int main() {

  double y=10, h=3,  P;

  P=exp(y+5.5)+9.1*pow(h, 3);

  printf("natija: %lf\n", P );


 return 0;
}
