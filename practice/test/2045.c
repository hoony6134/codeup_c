#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (m % 2 == 1 && k % 2 == 0) {
        printf("NO\n");
    } else if (n < m || n < k) {
        printf("NO\n");
    } else if (m * k % 2 == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}