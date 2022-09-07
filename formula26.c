#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// Z=sin(p^2+0.4)^3





int main() {

  double p=7,  Z;

  Z=sin(pow(pow(p, 2)+(0.4), 3));

  printf("natija: %lf\n", Z );


 return 0;
}
