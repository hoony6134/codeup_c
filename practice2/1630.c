#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char l[101][101];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%s",l[i]);
    }
    for(i=0;i<n;i++){
        printf("%s\n",l[i]);
        if(i!=n-1) printf("AMOLED\n");
    }
}