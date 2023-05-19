#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m][n];
    int cnt = 0;

    for (int i = 0; i < m; i++) {
        if (i % 2) {
            for (int j = 0; j < n; j++) {
                cnt++;
                arr[i][j] = cnt;
            }
        } else {
            for (int j = n-1; j >= 0; j--) {
                cnt++;
                arr[i][j] = cnt;
            }
        }
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = m-1; j >= 0; j--) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}