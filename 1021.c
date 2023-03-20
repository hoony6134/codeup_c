#include <stdio.h>
int main(void){
    char data[51]; //50보다 하나 큰 수로
    scanf("%s",data); //scanf에서 %s쓸때 & 사용 금지
    printf("%s",data);
}