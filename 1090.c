#include <stdio.h>
#include <math.h>
int main(){
    long long int a,r,n;
    scanf("%lld %lld %lld",&a,&r,&n);
    printf("%lld",(long long int)(a*(pow(r,n-1))));
}