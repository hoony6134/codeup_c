#include <stdio.h>
int main(){
    int n,i,a,num=0;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a);
        if(a%10==n) num++;
    }
    printf("%d",num);
}