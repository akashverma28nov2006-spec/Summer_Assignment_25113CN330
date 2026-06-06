#include <stdio.h>

double power(double x, int n) {
    double result = 1.0;
    long long absN = n; // Use long long to prevent overflow if n is INT_MIN
    
    if (absN < 0) {
        absN = -absN;
    }

    while (absN > 0) {
        // If absN is odd, multiply x with the result
        if (absN % 2 == 1) {
            result *= x;
        }
        // Square the base and divide the exponent by 2
        x *= x;
        absN /= 2;
    }

    // If the original exponent was negative, return 1 / result
    return (n < 0) ? (1.0 / result) : result;
}

int main() {
    double x;
    int n;
    
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    
    printf("%.2lf^%d = %lf\n", x, n, power(x, n));
    
    return 0;
}