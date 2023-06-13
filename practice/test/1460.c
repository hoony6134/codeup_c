#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    int a[100][100];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=num++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}