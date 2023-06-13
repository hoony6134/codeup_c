#include <stdio.h>
int main(){
    int n;
    int l[100][2];
    int ans[50];
    scanf("%d",&n);
    int i;
    for(i=0;i<n/2;i++){
        scanf("%d",&l[i][0]);
        scanf("%d",&l[i][1]);
    }
    for(i=0;i<n/2;i++){
        ans[i]=l[i][0]<=l[i][1]?l[i][0]:l[i][1];
    }
    for(i=0;i<n/2;i++){
        printf("%d ",ans[i]);
    }
}