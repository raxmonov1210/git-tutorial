#include <stdio.h>

int main(){

    int a=5, b=10, yigindi, S=0, n=0;

    for(int i=a; i<b+1; i++){
    n++;
    S=(2*a+1*(n-1))*n/2;
    }

    printf("yigindi: %d\n", S);
    
    return 0;
}