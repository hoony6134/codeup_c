#include <stdio.h>
int main(){
    char c[1001];
    int i;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++){
        if(c[i]>57&&c[i]<=90){ // 대문자
            c[i]+=32;
        }
        else if(c[i]>=97){ // 소문자
            c[i]-=32;
        }
    }
    printf("%s",c);
}