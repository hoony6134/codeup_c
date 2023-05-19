#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c) printf("정삼각형");
    else if (c>=a+b||b>=a+c||a>b+c) printf("삼각형아님");
    else{
        if (a==b || b==c || c==a) printf("이등변삼각형");
        else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) printf("직각삼각형");
        else printf("삼각형");
    }
}