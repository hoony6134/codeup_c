#include <stdio.h>
int main(){
    char cipher[201];
    gets(cipher);
    int i;
    for(i=0;cipher[i]!='\0';i++){
        if(cipher[i]==' ') continue;
        else{
            if(cipher[i]=='a'){
                cipher[i]='x';
                continue;
            }
            if(cipher[i]=='b'){
                cipher[i]='y';
                continue;
            }
            if(cipher[i]=='c'){
                cipher[i]='z';
                continue;
            }
            cipher[i]-=3;
        }
    }
    puts(cipher);
}