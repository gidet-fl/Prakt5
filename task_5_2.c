#30
#include <stdio.h>

#define HEIGHT 5

int main(void) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            if (i == 0 || i == HEIGHT - 1 || j == HEIGHT - 1 || 
               (j == 0 && i >= 2) || (i == 2 && j <= 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
