#include <stdio.h>
int main(){
    int a=0,b=0,c=0,t,virgin=1;
    scanf("%d",&t);
    while(t>0){
        if(t>=300){
            a++;
            t-=300;
        }
        else if(t>=60){
            b++;
            t-=60;
        }
        else if(t>=10){
            c++;
            t-=10;
        }
        else{
            virgin=0;
            break;
        }
    }
    if(virgin==0) printf("-1");
    else printf("%d %d %d",a,b,c);
}