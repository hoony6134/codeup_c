#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i = 1; i<=n; i++){
            if ( (n >= i*i) && (n < (i+1)*(i+1)) )
            {
                printf("%d %d",n-i*i,i);
                break;
            }
        }
    return 0;
}
