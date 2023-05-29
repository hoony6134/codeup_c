#include <stdio.h>
int main(){
    int n,box=0;
    scanf("%d",&n);
    while(n!=0){
        if(n-10>=0){
            box++;
            n-=10;
            continue;
        }
        else if(n-5>=0){
            box++;
            n-=5;
            continue;
        }
        else if(n-3>=0){
            box++;
            n-=3;
            continue;
        }
        else{
            box++;
            n-=1;
            continue;
        }
    }
    printf("%d",box);
}