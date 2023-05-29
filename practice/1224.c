#include <stdio.h>
int main(){
    float a,b,c,d,N,M;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    N=a/b; M=c/d;
    if(N>M) printf(">");
    else if(N==M) printf("=");
    else printf("<");
}