#7
#include <stdio.h>
#include <math.h>

int main(void) {
    double A = 0.0;
    double B = 3.0;
    double H = 0.5;
    int iteration = 1;

    printf("=========================================\n");
    printf("|  Итерация  |     X      |      Y      |\n");
    printf("=========================================\n");

    for (double x = A; x <= B + 0.00001; x += H) {
        double y = exp(x);
        printf("| %10d | %10.4f | %11.4f |\n", iteration, x, y);
        iteration++;
    }

    printf("=========================================\n");
    return 0;
}
