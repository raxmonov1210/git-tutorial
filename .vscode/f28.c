#include <stdio.h>
#include <math.h>


int main(){

    double yil=2022, kun1=366, kun2=365, kabisa_yili, kabisa_bolmagan_yil;
    kabisa_yili=(kun1)*(yil);
    kabisa_bolmagan_yil=(kun2)*(yil);
    

    printf("Natija: %0.lf\n", kabisa_yili);
    printf("Natija: %.0lf\n", kabisa_bolmagan_yil);



    
   

    return 0;
}