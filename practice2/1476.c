#include <stdio.h>
int main(){
    int arr[101][101];
    int n,m;
    int temp_i, temp_j;
    scanf("%d %d",&n,&m);
    int x=1, j=1, i;
    for(i=1;i<=n+m;i++){
        temp_i=i;
        if(temp_i>n){
            temp_i=n;
            j++;
        }
        temp_j=j;
        while(temp_i>0){
            if(i+1==temp_i+temp_j){
                arr[temp_i][temp_j]=x;
                x++;
            }
            temp_i--;
            temp_j++;
            if(temp_j>m) break;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}