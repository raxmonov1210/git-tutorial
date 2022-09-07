#include <stdio.h>
#include <math.h>cleAR

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// H=siny^2-2.8*y+ildizda|y|





int main() {

  double y=-10,  H;

  H=sin(pow(y, 2))-2.8*y+sqrt(fabs(y));

  printf("answer: %lf\n", H );


 return 0;
}
