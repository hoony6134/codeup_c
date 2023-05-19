#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n>=30&&n<=40)||(n>=60&&n<=70)) printf("win\n");
    else printf("lose\n");
}