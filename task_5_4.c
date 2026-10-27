#12
#include <stdio.h>
#include <math.h>

#define SIZE 8

int main(void) {
    double src[SIZE];
    double dst[SIZE];

    for (int i = 0; i < SIZE; i++) {
        src[i] = sin(i + 1);
    }

    double current_sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        current_sum += src[i];
        dst[i] = current_sum;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", src[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", dst[i]);
    }
    printf("\n");

    return 0;
}
