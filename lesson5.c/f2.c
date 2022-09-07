#include <stdio.h>
#include <math.h>


int main(){

    int son1=-12;

    if(son1>0){
        son1++;
    } else {
        if(son1<0){
            son1 -=2;
        } else {
            son1 -= 2;
        }
    }

    printf("Natija: %d", son1);

    return 0;
}