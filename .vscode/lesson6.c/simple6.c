

#include <stdio.h>

void digitcountsum (int k, int c1, int s1){

    c1=0;

    s1=0;

    while(k!=0){

        s1+=k%10;

        ++c1;

        k/=10;

    }

}

 

int main(void)

{

        double k=546465;


        double c,s;

        digitcountsum(k, c, s);

        printf("C: %lf\nS: %lf\n",c,s);

   

    return 0;

}