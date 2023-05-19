#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=b && a<=c){
        if(b>=c) printf("%d",c);
        else printf("%d",b);
    }
    else if (b<=c && b<=a){
        if(c>=a) printf("%d",a);
        else printf("%d",c);
    }
    else{
        if (a>=b) printf("%d",b);
        else printf("%d",a);
    }
}