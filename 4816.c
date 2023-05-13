#include <stdio.h>
int main(){
    int t,ans;
    int a=0,b=0,c=0; // a=300s b=60s c=10s
    scanf("%d",&t);
    int i=0,brk=0;
    while(t!=0){
        if(t>=300){
            a+=1;
            t-=300;
        }
        else if(t>=60){
            b+=1;
            t-=60;
        }
        else if(t>=10){
            c+=1;
            t-=10;
        }
        else{
            brk=1;
            break;
        }
    }
    if(brk==1) printf("-1");
    else printf("%d %d %d",a,b,c);
}