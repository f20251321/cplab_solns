#include <stdio.h>

// (a)
void calc_if(char op, int a, int b) {
  if (op == '+')
    printf("Result: %d\n", a + b);
  else if (op == '-')
    printf("Result: %d\n", a - b);
  else if (op == '*')
    printf("Result: %d\n", a * b);
  else if (op == '/') {
    if (b == 0)
      printf("Error: Division by zero\n");
    else
      printf("Result: %d\n", a / b);
  } else if (op == '%') {
    if (b == 0)
      printf("Error: Division by zero\n");
    else
      printf("Result: %d\n", a % b);
  } else
    printf("Invalid operator\n");
}

// (b)
void calc_switch(char op, int a, int b) {
  switch (op) {
  case '+':
    printf("Result: %d\n", a + b);
    break;
  case '-':
    printf("Result: %d\n", a - b);
    break;
  case '*':
    printf("Result: %d\n", a * b);
    break;
  case '/':
    if (b == 0)
      printf("Error: Division by zero\n");
    else
      printf("Result: %d\n", a / b);
    break;
  case '%':
    if (b == 0)
      printf("Error: Division by zero\n");
    else
      printf("Result: %d\n", a % b);
    break;
  default:
    printf("Invalid operator\n");
  }
}

int main() {
  char op;
  int a, b;

  printf("Enter operator (+, -, *, /, %%): ");
  scanf("%c", &op);
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("Using if: ");
  calc_if(op, a, b);
  printf("Using switch: ");
  calc_switch(op, a, b);

  return 0;
}