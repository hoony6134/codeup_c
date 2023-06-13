#include <stdio.h>

int main() {
    char formula[101];
    int i, len;
    double mass = 0;

    // 화학식 입력 받기
    scanf("%s", formula);

    // 화학식의 길이 계산하기
    for (len = 0; formula[len] != '\0'; len++);

    // 분자량 계산하기
    for (i = 0; i < len; i++) {
        switch (formula[i]) {
            case 'C':
                if (formula[i + 1] >= '1' && formula[i + 1] <= '9') {
                    mass += (formula[i + 1] - '0') * 12;
                    i++;
                } else {
                    mass += 12;
                }
                break;
            case 'H':
                if (formula[i + 1] >= '1' && formula[i + 1] <= '9') {
                    mass += (formula[i + 1] - '0') * 1;
                    i++;
                } else {
                    mass += 1;
                }
                break;
        }
    }

    // 분자량 출력하기
    printf("%d", (int)mass);

    return 0;
}