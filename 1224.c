#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (((float)a/(float)b)>((float)c/(float)d)){
        printf(">");
    }
    else if (((float)a/(float)b)==((float)c/(float)d)){
        printf("=");
    }
    else{
        printf("<");
    }
}