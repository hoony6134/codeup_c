#include <stdio.h>
int main(){
    int n,i,a,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        max=(a>=max)?a:max;
    }
    printf("%d",max);
}