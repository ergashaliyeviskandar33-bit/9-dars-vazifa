#include <stdio.h>

int main() {
    int son;

    printf("Ikki xonali son kiriting: ");
    scanf("%d", &son);

    printf("Teskari tartibda: ");
    while (son > 0) {
        printf("%d", son % 10);
        son /= 10;
    }
        printf("\n");

    return 0;
}