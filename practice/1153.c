#include <stdio.h>
int main(){
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=(a>=b?a:b);
    if(max==a){
        if(max==b) printf("=");
        else printf(">");
    }
    else printf("<");
}