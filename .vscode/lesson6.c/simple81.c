/*#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double AddRightDigit(double son){
    printf("Sonlar: %lf, %lf\n", son);

    return (son+i);
}

int main()
{
    double son;
    int i;
    for (i=1;i<=9; i++){
        AddRightDigit(i);
    
    }

    return 0;
 }*/





#include <stdio.h>
void  addrightdigit(int son, int raqam){
    raqam*=10;
    raqam+=son;
}
 
int main(void)
{
    int i,k;
    printf("K:");
    scanf("%i", &k);
    for(i=1;i<=2;++i){
        int d;
        printf("D:");
        scanf("%i", &d);
 
        addrightdigit(d, &k);
        printf("K: %i\n",k);
   }
    return 0;
}