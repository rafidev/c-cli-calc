#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float mul(float num1, float num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    return num1 / num2;
}

int main() {
    float num1 = 0;
    float num2 = 0;

    printf("Input num1: ");
    scanf("%f", &num1);

    printf("Input num2: ");
    scanf("%f", &num2);

    char operation;
    printf("Input Operation: ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("%g + %g = %g\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%g - %g = %g\n", num1, num2, sub(num1, num2));
            break;
        case '*':
            printf("%g * %g = %g\n", num1, num2, mul(num1, num2));
            break;
        case '/':
            printf("%g / %g = %g\n", num1, num2, div(num1, num2));
            break;
        default:
            printf("Invalid Operation\n");
            return 0;
    }

    return 0;
}

