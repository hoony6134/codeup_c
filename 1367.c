#include <stdio.h>
int main(){
    int n,i,j,lim,temp;
    scanf("%d",&n);
    lim=2*n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=lim-n-i+1;j++){
            printf(" ");
        }
        for(temp=1;temp<=n;temp++){
            printf("*");
        }
        for(j+=4;j<=lim;j++){
            printf(" ");
        }
        printf("\n");
    }
}