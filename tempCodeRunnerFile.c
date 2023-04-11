#include <stdio.h>
int main(){
    long long int a,r,n,i,t;
    scanf("%lld %lld %lld",&a,&r,&n);
    t=a;
    for(i=0;i<n-1;i++){
        t*=r;
    }
    printf("%lld",t);
}