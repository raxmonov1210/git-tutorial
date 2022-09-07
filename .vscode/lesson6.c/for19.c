#include <stdio.h>
int main(){
    int n,n2=1,S=0;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        n2*=i;
        S+=n2;
    }
    printf("S=%d",S);
    return 0;
}