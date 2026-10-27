#16
#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return tan(a) + 1.0 / tan(b);
}

int main(void) {
    double a, b;

    printf("Введите пары чисел a и b :\n");
    
    while (scanf("%lf %lf", &a, &b) == 2) {
        double result = calc(a, b);
        printf("Результат: %.4f\n", result);
    }

    return 0;
}
