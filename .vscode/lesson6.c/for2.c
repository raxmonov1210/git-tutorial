#include <stdio.h>

int main(){

    int a=5, b=10, n=0, yigindi;

    for(int i=a; i<b+1; i++){
        printf("Natija: %d\n", i);
        n++;
    }
        printf("soni: %d\n", n);
        yigindi=(2*a+1*(n-1))*n/2;
        
    
    printf("yigindi: %d\n",yigindi);
    
    return 0;
}