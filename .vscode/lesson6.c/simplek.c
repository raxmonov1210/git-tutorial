#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isSquare(int son){

    float ildiz = sqrt(son);

    if(son==pow(ildiz, 2)){
        return true;
    } else {
        return false;
    }
}

int main()
{
    for(int i=1; i<50; i++){
        printf("Natija(%d): %d\n", i, isSquare(i));
    }

    return 0;
}




// 4, 9, 16, 25,32