#include <stdio.h>
int main(){
    char n[4];
    int m=0;
    scanf("%s",n);
    if (n[0]=='3'||n[0]=='6'||n[0]=='9') m+=1;
    if (n[1]=='3'||n[1]=='6'||n[1]=='9') m+=1;
    if (n[2]=='3'||n[2]=='6'||n[2]=='9') m+=1;
    if(m==1) printf("K");
    else if(m==2) printf("KK");
    else if(m==3) printf("KKK");
    else printf("%s",n);
}