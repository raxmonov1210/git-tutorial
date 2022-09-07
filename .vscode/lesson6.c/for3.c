#include <stdio.h>

int main(){

    int a=5, b=10, soni=0;

    for(int i=b; i>a; i--){
        printf("Natija: %d\n", i);
        soni++;
        
    }

    printf("Soni: %d\n", soni);
    
    return 0;
}