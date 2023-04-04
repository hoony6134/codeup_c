#include <stdio.h>
int main(){
    int N,cnt,temp;
    int f,m,l;
    cnt=0;
    scanf("%d",&N);
    while(cnt<N){
        cnt++;
        scanf("%d",&temp);
        if(cnt==1){
            f=temp;
        }
        if(N/2 + 1 == cnt){
            m=temp;
        }
        if(N==cnt){
            l=temp;
        }
    }
    printf("%d %d %d",f,m,l);
}