#include <stdio.h>
int main(){
    int arr[100][100], num=0,l,r,t,b;
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    
    r=m-1; // 오른쪽 끝
    b=n-1; // 가장 아래
    l=0; // 시작점 (왼쪽)
    t=0; // 시작점 (위쪽)

    while(num<n*m){
        for(i=l;(i<=r)&&(num<n*m);i++){
            arr[t][i]=++num;
        }
        t++;
        for(i=t;(i<=b)&&(num<n*m);i++){
            arr[i][r]=++num;
        }
        r--;
        for(i=r;(i>=l)&&(num<n*m);i--){
            arr[b][i]=++num;
        }
        b--;
        for(i=b;(i>=t)&&(num<n*m);i--){
            arr[i][l]=++num;
        }
        l++;
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}