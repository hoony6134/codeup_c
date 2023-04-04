#include <stdio.h>
int main(){
    int n,i,ans;
    ans=1;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        ans*=i;
    }
    printf("%d",ans);
}