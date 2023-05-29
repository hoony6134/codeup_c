#include <stdio.h>
int main(){
    int n,r=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i+=10){
        r++;
    }
    printf("%d",r);
}