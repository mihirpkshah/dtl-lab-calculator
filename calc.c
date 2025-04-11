#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
