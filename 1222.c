#include <stdio.h>
int main(){
    int a,b,c,plus;
    scanf("%d %d %d",&a,&b,&c);
    a=90-a; // 남은시간으로 a 변경
    plus = a/5;
    if(90%a!=0){
        plus++;
    }
    else if(a==1){
        plus++;
    }
    // printf("%d",plus);
    if (c-b==plus){
        printf("same");
    }
    else if (c-b>plus){
        printf("lose");
    }
    else{
        printf("win");
    }
}