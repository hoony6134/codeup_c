#include <stdio.h>
int main(){
    int n,m;
    m=0;
    scanf("%d",&n);
    while(n){
        n/=10;
        m+=1;
    }
    printf("%d",m);
}