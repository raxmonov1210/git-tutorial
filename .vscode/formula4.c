#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// D=9.8*a^2+5.52*cos(t^2)





int main() {

  double a=3, t=40, D;

  D=9.8*pow(a, 2)+5.52*cos(pow(t, 2));

  printf("natija: %lf\n", D );


 return 0;
}
