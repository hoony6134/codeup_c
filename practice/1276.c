#include <stdio.h>
int main(){
    int k,h,s=0;
    scanf("%d %d",&k,&h);
    if(k%2==0){
        s+=(k/2)*10;
    }
    else s+=(k/2)+1;
    if(h%2==0){
        s+=(h/2)*10;
    }
    else s+=(h/2)+1;
    printf("%d",s);
}