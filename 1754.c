#include <stdio.h>
int main(){
    char a[101];
    char b[101];
    int i,j;
    int len_a=0, len_b=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++){
        len_a++;
    }
    for(i=0;b[i]!='\0';i++){
        len_b++;
    }
    if(len_a>len_b) printf("%s %s",b,a);
    else if(len_a<len_b) printf("%s %s",a,b);
    else{
        for(i=0;i<len_a;i++){
            if(a[i]>b[i]){
                printf("%s %s",b,a);
                break;
            }
            else if(a[i]<b[i]){
                printf("%s %s",a,b);
                break;
            }
        }
    }
}