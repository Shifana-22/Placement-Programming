#include <stdio.h>

float evaluatePolynomial(int degree, float coefficients[], float x)
{
    float result = 0;
    float x_power = 1;
    for (int i = 0; i <= degree; i++) {
        result += coefficients[i] * x_power;
        x_power *= x;
    }
    return result;
}

int main()
{
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    float coefficients[degree + 1];
    printf("Enter the coefficients: ");
    for (int i = 0; i <= degree; i++) {
        scanf("%f", &coefficients[i]);
    }

    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float result = evaluatePolynomial(degree, coefficients, x);
    printf("Result of P(%f) = %f\n", x, result);
    return 0;
}