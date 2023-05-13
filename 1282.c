#include <stdio.h>
int main(){
    int n,i,j,k,t,root=0;
    int b,b1,b2=0;
    scanf("%d",&n);
    getchar();
    for(i=0;;i++){
        if(b1==1) break;
        for(j=0;j*j<=n-i;j++){
            printf("i: %d, j: %d\n", i, j);
            if(j*j==n-i){
                root=j;
                b=1;
                b1=1;
                break;
            }
            else b=0;
        }
        if(b==1){
            k=i;
            t=root;
        }
    }
    printf("%d %d",k,t);
}