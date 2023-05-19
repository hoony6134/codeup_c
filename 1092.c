#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a%b==0) b=1;
    if(b%c==0) c=1;
    if(c%a==0) a=1;
    printf("%d",a*b*c);
}