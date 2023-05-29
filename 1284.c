#include <stdio.h>
int i,j;
int check(int num){
    int cnt=0;
    for(j=1;j<=num;j++){
        if(num%j==0) cnt++;
        if(cnt>2) break;
    }
    // printf("num: %d / cnt: %d / verdict: %d\n",num,cnt,cnt==2);
    if(cnt==2) return 1;
    else return 0;
}
int main(){
    int fuse=1;
    int n;
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        if(check(i)==1){
            if(n%i==0&&check(n/i)==1){
                printf("%d %d",i,n/i);
                fuse=0;
                break;
            }
        }
    }
    if(fuse==1) printf("wrong number");
}