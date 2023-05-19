#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int i,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j]=n*m-i-j*n;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}