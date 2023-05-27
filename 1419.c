#include <stdio.h>
int main(){
    char letter[101];
    int i,a=0;
    gets(letter);
    for(i=0;letter[i]!='\0';i++){
        if(letter[i]=='l'&&letter[i+1]=='o'&&letter[i+2]=='v'&&letter[i+3]=='e') a+=1;
    }
    printf("%d",a);
}