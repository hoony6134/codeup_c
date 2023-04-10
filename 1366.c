#include <stdio.h>
int main(){
    int n, l, i, j;
    scanf("%d",&n);
    l=(n-3)/2;
    for(i=0;i<n;i++){ // 첫줄에 n개 별 출력
        printf("*");
    }
    printf("\n");
    for(i=0;i<l;i++){ // 2번째 줄부터 중간 줄 전까지 실행될 코드
        printf("*"); // 첫 칸은 별 출력
        for(j=0;j<i;j++){ // 0개부터 (n-2)/2-1개 빈칸 출력
            printf(" ");
        }
        printf("*"); // 중간 대각선별 출력
        for(j=0;j<(n-2)/2-i-1;j++){
            printf(" "); 
        }
        printf("*");
        for(j=0;j<(n-2)/2-i-1;j++){
            printf(" "); 
        }
        printf("*"); // 중간 대각선별 출력
        for(j=0;j<i;j++){ // 0개부터 (n-2)/2-1개 빈칸 출력
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=0;i<n;i++){ // 중간에 n개 별 출력
        printf("*");
    }
    printf("\n");
    for(i=l-1;i>=0;i--){ // 2번째 줄부터 중간 줄 전까지 실행될 코드
        printf("*"); // 첫 칸은 별 출력
        for(j=0;j<i;j++){ // 0개부터 (n-2)/2-1개 빈칸 출력
            printf(" ");
        }
        printf("*"); // 중간 대각선별 출력
        for(j=0;j<(n-2)/2-i-1;j++){
            printf(" "); 
        }
        printf("*");
        for(j=0;j<(n-2)/2-i-1;j++){
            printf(" "); 
        }
        printf("*"); // 중간 대각선별 출력
        for(j=0;j<i;j++){ // 0개부터 (n-2)/2-1개 빈칸 출력
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=0;i<n;i++){ // 끝에 n개 별 출력
        printf("*");
    }
}