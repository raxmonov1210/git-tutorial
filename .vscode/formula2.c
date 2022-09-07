#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// K=ln(p^2+y^2)+e^p


int main(){


    double p=2, y=3, e=2.7, K;

    K=loge(pow((p, 2)+pow(y, 3)))+pow(e, p);

    printf("natija: %lf\n", K );


 return 0;
}



