#include <stdio.h>

int main() {
    char s1[21], s2[21], s3[21];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    int len1 = 0, len2 = 0, len3 = 0;
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;
    while (s3[len3] != '\0') len3++;

    if (s1[len1-1] == s2[0] && s2[len2-1] == s3[0] && s3[len3-1] == s1[0]) {
        printf("good\n");
    } else {
        printf("bad\n");
    }

    return 0;
}