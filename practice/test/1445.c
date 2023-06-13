#include <stdio.h>
int main(){
    int n,m,t;
    int l[2000];
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n+m;i++){
        scanf("%d",&l[i]);
    }
    for(i=0;i<n+m;i++){
        for(j=0;j<n+m-1;j++){
            if(l[j]>l[j+1]){
                t=l[j];
                l[j]=l[j+1];
                l[j+1]=t;
            }
        }
    }
    for(i=0;i<n+m;i++){
        printf("%d ",l[i]);
    }
}