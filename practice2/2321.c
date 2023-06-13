#include <stdio.h>

int main() {
    char parent1[3], parent2[3];
    scanf("%s %s", parent1, parent2);

    if ((parent1[0] == 'A' && parent1[1] == 'B') || (parent2[0] == 'A' && parent2[1] == 'B')) {
        printf("AB");
    } else if ((parent1[0] == 'A' && parent1[1] == 'O') || (parent2[0] == 'A' && parent2[1] == 'O') ||
               (parent1[0] == 'B' && parent1[1] == 'O') || (parent2[0] == 'B' && parent2[1] == 'O')) {
        printf("A or B");
    } else if ((parent1[0] == 'B' && parent1[1] == 'A') || (parent2[0] == 'B' && parent2[1] == 'A') ||
               (parent1[0] == 'A' && parent1[1] == 'A') || (parent2[0] == 'A' && parent2[1] == 'A')) {
        printf("A, B, AB or O");
    } else if ((parent1[0] == 'O' && parent1[1] == 'O') && (parent2[0] == 'O' && parent2[1] == 'O')) {
        printf("O");
    } else {
        printf("Invalid blood type");
    }

    return 0;
}