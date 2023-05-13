#include <stdio.h>

int evaluate(char *expression) {
  if (expression[0] == '=') {
    return 0;
  }

  int left = evaluate(expression + 1);
  char op = expression[0];
  int right = evaluate(expression + 2);

  switch (op) {
    case '+':
      return left + right;
    case '-':
      return left - right;
    case '*':
      return left * right;
    case '/':
      return left / right;
  }

  return -1;
}

int main() {
  char expression[100];
  scanf("%s", expression);

  int result = evaluate(expression);
  printf("%d\n", result);

  return 0;
}
