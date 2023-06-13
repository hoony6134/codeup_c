#include <stdio.h>
int main(){
    char a[7];
    int i,j,num=0,o[10]={0},k=1,len=0;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        len++;
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    printf("%d",num);
}