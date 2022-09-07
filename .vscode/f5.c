#include <stdio.h>
#include <math.h>


int main(){

    int A=12, B=10, C=6, Natija1=0, Natija2=0;

    if(A>0) Natija1++;
    if(B>0) Natija1++;
    if(C>0) Natija1++;
    if(A<0) Natija2++;
    if(B<0) Natija2++;
    if(C<0) Natija2++;

    printf("Natija: %d\n", Natija1);
    printf("Natija: %d\n", Natija2);

    return 0;
}