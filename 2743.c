#include <stdio.h>
int main(){
    // int plus, minus, multiply, divide=0;
    int a,b,c,d,e,virgin=1;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&d,&e);
    if (a+b==c){
        printf("%d ",d+e);
        virgin=0;
    }
    if (a-b==c){
        printf("%d ",d-e);
        virgin=0;
    }
    if (a*b==c){
        printf("%d ",d*e);
        virgin=0;
    }
    if (a/b==c){
        printf("%d ",d/e);
        virgin=0;
    }
    if (virgin==1) printf("NO");
}