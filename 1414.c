#include <stdio.h>
int main(){
    char cipher[101];
    int i;
    int a=0;
    int b=0;
    gets(cipher);
    for(i=0;cipher[i]!='\0';i++){
        if(cipher[i]=='C'||cipher[i]=='c'){
            a+=1;
            if(cipher[i+1]=='C'||cipher[i+1]=='c'){
                b+=1;
            }
        }
    }
    printf("%d\n%d",a,b);
}