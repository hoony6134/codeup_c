#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c){
        printf("정삼각형");
    }
    else if (a+b>c&&b+c>a&&c+a>b){
        if (a==b||b==c||c==a){
            printf("이등변삼각형");
        }
        else if (a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
            printf("직각삼각형");
        }
        else{
            printf("삼각형");
        }
    }
    else{
        printf("삼각형아님");
    }
}