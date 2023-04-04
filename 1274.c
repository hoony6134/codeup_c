#include <stdio.h>
int main(){
    int a,i,b;
    scanf("%d",&a);
    b=0;
    for(i=2;i!=a;i++){
        if(a%i==0){
            b=1;
            break;
        }
    }
    if(b==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}