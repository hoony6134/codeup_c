#include <stdio.h>
int main(){
    int n;
    long long int arr[50][50];
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0) arr[i][j]=1;
            else if(j==i) arr[i][j]=1;
            else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
    }
}