#include <stdio.h>
int main()
{
    int k, h;
    scanf("%d %d", &k, &h);
    if(k%2==0){ // 짝수일 때
        k/=2;
        k*=10;
    }
    else{ // 홀수일 때
        k=k%2+k/2;
    }
    if(h%2==0){ // 짝수일 때
        h/=2;
        h*=10;
    }
    else{ // 홀수일 때
        h=h%2+h/2;
    }
    printf("%d",k+h);
}