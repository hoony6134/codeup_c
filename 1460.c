#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int i,j,k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            k+=1;
            arr[i][j]=k;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}