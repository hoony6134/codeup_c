#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,fuse=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            fuse=1;
            break;
        }
    }
    if(fuse==1) printf("not prime");
    else printf("prime");
}