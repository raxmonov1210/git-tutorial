#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// S=9.75*y^7+2*tgx





int main() {

  double y=2, x=45, S;

  S=9.75*pow(y, 7)+2*tan(x);

  printf("natija: %lf\n", S );


 return 0;
}
