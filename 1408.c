#include <stdio.h>
int main(){
    char pw[21];
    char enc1[21];
    char enc2[21];
    gets(pw);
    int i;
    for(i=0;pw[i]!='\0';i++){
        enc1[i]=pw[i]+2;
        enc2[i]=(pw[i]*7)%80+48;
    }
    enc1[i]='\0';
    enc2[i]='\0';
    puts(enc1);
    puts(enc2);
}