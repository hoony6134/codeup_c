// Copilot 이용, 다시 풀어보기!!
#include <stdio.h>
int main(){
    // array of real lottery numbers (6 numbers + 1 bonus number)
    int real[7];
    // array of user's lottery numbers (6 numbers)
    int user[6];
    scanf("%d %d %d %d %d %d %d", &real[0], &real[1], &real[2], &real[3], &real[4], &real[5], &real[6]);
    scanf("%d %d %d %d %d %d", &user[0], &user[1], &user[2], &user[3], &user[4], &user[5]);
    // count of matching numbers
    int count = 0;
    // count of matching bonus number
    int bonus = 0;
    // check if user's numbers match real numbers
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (user[i] == real[j]) {
                count++;
            }
        }
    }
    // check if user's numbers match real bonus number
    for (int i = 0; i < 6; i++) {
        if (user[i] == real[6]) {
            bonus++;
        }
    }
    // print result
    if (count == 6) {
        printf("1");
    } else if (count == 5 && bonus == 1) {
        printf("2");
    } else if (count == 5) {
        printf("3");
    } else if (count == 4) {
        printf("4");
    } else if (count == 3) {
        printf("5");
    } else {
        printf("0");
    }
}