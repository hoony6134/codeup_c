#include <stdio.h>
int main(){
    int h,k,i,j;
    char d;
    scanf("%d %d %c",&h,&k,&d);
    if(d=='L'){
        for(i=1;i<=h;i++){
            for(j=0;j<i-1;j++) printf(" ");
            for(j=0;j<k;j++) printf("*");
            printf("\n");
        }
    }
    if(d=='R'){
        for(i=h;i>=1;i--){
            for(j=0;j<i-1;j++) printf(" ");
            for(j=0;j<k;j++) printf("*");
            printf("\n");
        }
    }
}