#include <stdio.h>
#include <math.h>


int main(){

    int A=5, B=4, C=3, X, Y, Z;


    if(((A<B)&&(B<C))||((A>B)&&(B>C))){
        printf("NAtija: %d\n", X=2*A);
        printf("NAtija: %d\n", Y=2*B);
        printf("NAtija: %d\n", Z=2*C);
    } 
    else {
        printf("NAtija: %d\n", X=-A);
        printf("NAtija: %d\n", Y=-B);
        printf("NAtija: %d\n", Z=-C);
       
    }

    printf("NAtija A: %d\n", A);
    printf("NAtija B: %d\n", B);
    printf("NAtija C: %d\n", C);

       

    
   

    return 0;
}