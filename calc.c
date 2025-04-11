#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    double num1, num2, result;
    char operator;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &operator);  // Note the space before %c

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
