#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
//W=e^y+r+7.2*sinr





int main() {

  double y=10, r=3,   W;

  W=exp(y+r)+7.2*sin(r);

  printf("natija: %lf\n", W );


 return 0;
}
