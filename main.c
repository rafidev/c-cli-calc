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
    float num1 = 4.5;
    float num2 = 6.3;

    float sum = add(num1, num2);
    printf("%g + %g = %g\n", num1, num2, sum);

    float dif = sub(num1, num2);
    printf("%g - %g = %g\n", num1, num2, dif);

    float pro = mul(num1, num2);
    printf("%g * %g = %g\n", num1, num2, pro);

    float quo = div(num1, num2);
    printf("%g / %g = %g\n", num1, num2, quo);

    return 0;
}

