#include <stdio.h>
int main(){
    int a,b,i,t;
    scanf("%d %d",&a,&b);
    t=a+b;
    a=a<b?a:b;
    b=t-a;
    for(i=a;i<=b;i++){
        printf("%d ",i);
    }
}