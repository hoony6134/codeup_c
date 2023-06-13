#include <stdio.h>
int main(){
    char s1[21],s2[21],s3[21];
    int a=0,b=0,c=0,i;
    scanf("%s %s %s",s1,s2,s3);
    while(s1[a]!='\0') a++;
    while(s2[b]!='\0') b++;
    while(s3[c]!='\0') c++;
    if(s1[a-1]==s2[0]&&s2[b-1]==s3[0]&&s3[c-1]==s1[0]) printf("good");
    else printf("bad");
}