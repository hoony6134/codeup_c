#include <stdio.h>
int main(){
    int a,b,c,n,now,i;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    now=a;
    for(i=1;i<n;i++){
        now=now*b+c;
    }
    printf("%d",now);
}