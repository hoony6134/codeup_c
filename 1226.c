#include <stdio.h>
int main(){
    int lotto[7];
    int user[6];
    int i,j,bonus,cnt,ad=0;
    for(i=0;i<7;i++){
        scanf("%d",&lotto[i]);
    }
    for(i=0;i<6;i++){
        scanf("%d",&user[i]);
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if (user[i]==lotto[j]) cnt++;
        }
    }
    if (cnt==5){
        for(i=0;i<=6;i++){
            if (user[i]==lotto[6]) bonus=1;
        }
    }
    if (cnt==0 || cnt==1 || cnt==2) printf("0");
    if (cnt==3) printf("5");
    if (cnt==4) printf("4");
    if (cnt==5){
        if (bonus==1) printf("2");
        else printf("3");
    }
    if (cnt==6) printf("1");
}