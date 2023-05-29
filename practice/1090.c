#include <stdio.h>
int main(){
    long long int a,r,n,now,i;
    scanf("%lld %lld %lld",&a,&r,&n);
    now=a;
    for(i=1;i<n;i++){
        now=now*r;
    }
    printf("%lld",now);
}