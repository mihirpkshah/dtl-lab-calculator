#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char mode;
    char num1_str[20], num2_str[20];
    double result = 0;
    char operator;
    int num1_int, num2_int;
    double num1_dec, num2_dec;

    printf("Choose calculation mode:\n");
    printf("  h - Hexadecimal\n");
    printf("  d - Decimal\n");
    printf("Enter choice (h/d): ");
    scanf(" %c", &mode);

    if (mode == 'h' || mode == 'H') {
        // HEX MODE
        printf("Hexadecimal Calculator (use format like 0xA, 0x1F)\n");
        printf("-------------------------------------------------\n");
        printf("Enter first hex number: ");
        scanf("%s", num1_str);
        num1_int = (int)strtol(num1_str, NULL, 0);

        printf("Enter an operator (+, -, *, /, ^): ");
        scanf(" %c", &operator);

        printf("Enter second hex number: ");
        scanf("%s", num2_str);
        num2_int = (int)strtol(num2_str, NULL, 0);

        switch (operator) {
            case '+':
                result = num1_int + num2_int;
                break;
            case '-':
                result = num1_int - num2_int;
                break;
            case '*':
                result = num1_int * num2_int;
                break;
            case '/':
                if (num2_int == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result = num1_int / num2_int;
                break;
            case '^':
                result = pow(num1_int, num2_int);
                break;
            default:
                printf("Invalid operator.\n");
                return 1;
        }

        printf("Result: 0x%X %c 0x%X = 0x%X\n", num1_int, operator, num2_int, (int)result);
    }
    else if (mode == 'd' || mode == 'D') {
        // DECIMAL MODE
        printf("Decimal Calculator\n");
        printf("------------------\n");
        printf("Enter first number: ");
        scanf("%lf", &num1_dec);

        printf("Enter an operator (+, -, *, /, ^): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2_dec);

        switch (operator) {
            case '+':
                result = num1_dec + num2_dec;
                break;
            case '-':
                result = num1_dec - num2_dec;
                break;
            case '*':
                result = num1_dec * num2_dec;
                break;
            case '/':
                if (num2_dec == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result = num1_dec / num2_dec;
                break;
            case '^':
                result = pow(num1_dec, num2_dec);
                break;
            default:
                printf("Invalid operator.\n");
                return 1;
        }

        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1_dec, operator, num2_dec, result);
    }
    else {
        printf("Invalid mode selected.\n");
    }

    return 0;
}

