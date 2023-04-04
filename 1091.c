#include <stdio.h>
int main(){
    long long int a,m,d,n,i,num;
    scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
    num = a;
    for(i=0;i<n-1;i++){
        num = num*m + d;
    }
    printf("%lld",num);
}