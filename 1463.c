#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int i,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=n-i+n*j;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}