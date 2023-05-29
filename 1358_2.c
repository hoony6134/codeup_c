#include <stdio.h>
int main(){
    int n,i,j,r;
    scanf("%d",&n);
    r=n/2+1;
    for(i=0;i<r;i++){
        for(j=0;j<r-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*(i+1)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}