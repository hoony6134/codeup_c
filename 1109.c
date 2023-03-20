#include <stdio.h>
int main(void){
    char name[21];
    int age;
    char code;
    float key;
    scanf("%s\n%d\n%c\n%f",name,&age,code,&key);
    printf("%s\n%d\n%c\n%g",name,age,code,key);
}