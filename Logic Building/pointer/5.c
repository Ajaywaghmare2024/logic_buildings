/*Write a function power, which calculates x raised to y .
 Write another function, which calculates n! Using for loop.
  Use these functions to calculate the sum of first n terms of the Taylor series:
sin(x) = x - 3! 3 x + 5! 5 x + ……
*/
#include <stdio.h>

double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double taylorSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += power(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = taylorSeries(x, n);
    printf("Sum of the first %d terms of the Taylor series for x = %.2f is: %.6f\n", n, x, result);

    return 0;
}
