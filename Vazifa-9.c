#include <stdio.h>

int main() {
    int son = 0, pul;

    while (son < 100000){
        printf("Jamg'arilgan pulni kiriting: ");
        scanf("%d", &pul);
        son += pul;    
    }
    printf("Jami yig'ilgan pul: %d", son);
    
    return 0;
}