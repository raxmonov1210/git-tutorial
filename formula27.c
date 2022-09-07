#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// exp bu e sonni ifodalash uchun
// fabs bu modulni ifodalsh uchun 
// W=1.03*v+e^2*y+tg|x|





int main() {

  double y=10, x=3,  v=5,   W;

  W=1.03*v+exp(2*y)+tan(fabs(x));

  printf("natija: %lf\n", W );


 return 0;
}
