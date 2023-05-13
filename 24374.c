#include <stdio.h>
int key,prev,now,mode,virgin=0;
int calc(int calcinput){ // prev <op> calcinput(=now)
    if(virgin==1){
        virgin=0;
        return calcinput;
    }
    else{
        now=0;
        if(mode==1){
            return prev+calcinput;
        }
        else if(mode==2){
            return prev-calcinput;
        }
        else if(mode==3){
            return prev*calcinput;
        }
        else if(mode==4){
            return prev/calcinput;
        }
    }
}
int main(){
    virgin=1;
     // [MODE] 1:+ 2:- 3:* 4:/
    while(scanf("%d",&key)!='='){
        if(key=='+'){
            prev=calc(now);
            mode=1;
        }
        else if(key=='-'){
            prev=calc(now);
            mode=2;
        }
        else if(key=='*'){
            prev=calc(now);
            mode=3;
        }
        else if(key=='/'){
            prev=calc(now);
            mode=4;
        }
        else{
            now=now*10+key;
        }
    }
}