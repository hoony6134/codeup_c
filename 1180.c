#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a=(n%10)*10+(n/10);
    a*=2;
    if(a>=100){
        a%=100;
    }
    printf("%d\n",a);
    if(a<=50){
        printf("GOOD");
    }
    else{
        printf("OH MY GOD");
    }
}