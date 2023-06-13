#include <stdio.h>
int main(){
    int map[20][20];
    int n,a,i,j;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            map[i][j]=0;
        }
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&map[i][0]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0) continue;
            else{
                map[i][j]=map[i][j-1]-map[i-1][j-1];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}