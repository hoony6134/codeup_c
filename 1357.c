#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++){
        for(j=0;j<i;i++){
            printf("*");
        }
        printf("\n");
    }
}