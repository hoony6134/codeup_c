#include <stdio.h>
int main(){
    char s[1001];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z') s[i]-='a'-'A';
        else if(s[i]>='A'&&s[i]<'Z') s[i]+='a'-'A';
    }
    printf("%s",s);
}