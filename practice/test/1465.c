#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int num=1;
    int a[100][100];
    int i,j;
    for(i=n-1;i>=0;i--){
        for(j=0;j<m;j++){
            a[i][j]=num++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}