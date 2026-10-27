#6
#include <stdio.h>

int main(void) {
    int N;

    while (1) {
        printf("Введите количество слагаемых N: ");
        if (scanf("%d", &N) != 1) {
            printf("Ошибка ввода!\n");
            break;
        }

        if (N <= 0) {
            break;
        }

        double sum = 0.0;

        for (int i = 1; i <= N; i++) {
            sum += 1.0 / (i * (i + 1));
        }

        printf("SUM: %.6f\n\n", sum);
    }

    return 0;
}
