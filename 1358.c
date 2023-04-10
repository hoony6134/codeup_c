#include <stdio.h>
int main(){
    int n;
    int i,j,k;
    int range;
    scanf("%d",&n);
    range=n/2+n%2;
    for(i=1;i<=range;i++){
        for(j=0;j<(range-i);j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}