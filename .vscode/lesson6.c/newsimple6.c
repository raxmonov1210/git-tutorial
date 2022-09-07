#include <stdio.h>
 
void digitcountsum (int k, int *c, int *s){
    *c=0;
    *s=0;
    while(k!=0){
        *s+=k%10;
        ++*c;
        k/=10;
    }
}
 
int main(void)
{
    int i;
    for(i=1;i<=5;++i){
        int k;
        printf("K:");
        scanf("%i", &k);
        int c,s;
        digitcountsum(k, &c, &s);
        printf("C: %i\nS: %i\n",c,s);
   }
    return 0;
}