#include <stdio.h>

int main() {
  char str[100];
  int c_count = 0, h_count = 0;

  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'C') {
      int c_number = 0;
      while (str[i + 1] >= '0' && str[i + 1] <= '9') {
        c_number = c_number * 10 + str[i + 1] - '0';
        i++;
      }
      c_count += c_number;
    } else if (str[i] == 'H') {
      int h_number = 0;
      while (str[i + 1] >= '0' && str[i + 1] <= '9') {
        h_number = h_number * 10 + str[i + 1] - '0';
        i++;
      }
      h_count += h_number;
    }
  }

  int molecular_weight = 12 * c_count + 1 * h_count;

  printf("%d\n", molecular_weight);

  return 0;
}
