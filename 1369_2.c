#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==1)||(j==1)||(i==n)||(j==n)) printf("*");
            else if((j+i-1)%k==0) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}