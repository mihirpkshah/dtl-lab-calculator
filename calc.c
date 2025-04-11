#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include <stdbool.h>

bool even (int n){
	return !(n & 1);
}
bool odd (int n){
	return (n & 1);
}


#include <string.h>

int main() {
    char mode;
    char num1_str[20], num2_str[20];
    double result_dec = 0;
    int result_int = 0;
    char operator[3]; // for <<, >> support
    int num1_int, num2_int;
    double num1_dec, num2_dec;

    printf("Choose calculation mode:\n");
    printf("  h - Hexadecimal (Integer)\n");
    printf("  d - Decimal (Float)\n");
    printf("Enter choice (h/d): ");
    scanf(" %c", &mode);

    if (mode == 'h' || mode == 'H') {
        // HEX MODE (Bitwise and Integer Math)
        printf("Hexadecimal Calculator (supports + - * / ^ & | ~ << >>)\n");
        printf("-------------------------------------------------------\n");
        printf("Enter first hex number: ");
        scanf("%s", num1_str);
        num1_int = (int)strtol(num1_str, NULL, 0);

        printf("Enter an operator (+, -, *, /, ^, &, |, ~, <<, >>): ");
        scanf("%s", operator);

        if (strcmp(operator, "~") != 0) {
            printf("Enter second hex number: ");
            scanf("%s", num2_str);
            num2_int = (int)strtol(num2_str, NULL, 0);
        }

        if (strcmp(operator, "+") == 0)
            result_int = num1_int + num2_int;
        else if (strcmp(operator, "-") == 0)
            result_int = num1_int - num2_int;
        else if (strcmp(operator, "*") == 0)
            result_int = num1_int * num2_int;
        else if (strcmp(operator, "/") == 0) {
            if (num2_int == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result_int = num1_int / num2_int;
        }
        else if (strcmp(operator, "^") == 0)
            result_int = (int)pow(num1_int, num2_int);
        else if (strcmp(operator, "&") == 0)
            result_int = num1_int & num2_int;
        else if (strcmp(operator, "|") == 0)
            result_int = num1_int | num2_int;
        else if (strcmp(operator, "<<") == 0)
            result_int = num1_int << num2_int;
        else if (strcmp(operator, ">>") == 0)
            result_int = num1_int >> num2_int;
        else if (strcmp(operator, "~") == 0)
            result_int = ~num1_int;
        else {
            printf("Invalid operator.\n");
            return 1;
        }

        if (strcmp(operator, "~") == 0)
            printf("Result: ~0x%X = 0x%X\n", num1_int, result_int);
        else
            printf("Result: 0x%X %s 0x%X = 0x%X\n", num1_int, operator, num2_int, result_int);
    }
    else if (mode == 'd' || mode == 'D') {
        // DECIMAL MODE
        printf("Decimal Calculator (supports + - * / ^)\n");
        printf("---------------------------------------\n");
        printf("Enter first number: ");
        scanf("%lf", &num1_dec);

        printf("Enter an operator (+, -, *, /, ^): ");
        scanf(" %s", operator);

        printf("Enter second number: ");
        scanf("%lf", &num2_dec);

        if (strcmp(operator, "+") == 0)
            result_dec = num1_dec + num2_dec;
        else if (strcmp(operator, "-") == 0)
            result_dec = num1_dec - num2_dec;
        else if (strcmp(operator, "*") == 0)
            result_dec = num1_dec * num2_dec;
        else if (strcmp(operator, "/") == 0) {
            if (num2_dec == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result_dec = num1_dec / num2_dec;
        }
        else if (strcmp(operator, "^") == 0)
            result_dec = pow(num1_dec, num2_dec);
        else {
            printf("Invalid operator for decimal mode.\n");
            return 1;
        }

        printf("Result: %.2lf %s %.2lf = %.2lf\n", num1_dec, operator, num2_dec, result_dec);
    }
    else {
        printf("Invalid mode selected.\n");
    }

	int oddn;
	printf("Enter the number to check if it is odd : ");
	scanf("%d", &oddn);
	if(odd(oddn)) printf("The number %d is odd", oddn);
	else printf("The number %d is even", oddn);

	int evenn;
	printf("Enter the number to check if it is even : ");
	scanf("%d", &evenn);
	if(even(evenn)) printf("The number %d is even", evenn);
	else printf("The number %d is odd", evenn);
    return 0;
}
