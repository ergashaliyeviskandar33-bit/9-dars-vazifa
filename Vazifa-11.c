#include <stdio.h>

int main() {
    int son;
    printf(" 1-Avtomobil\n 2-Avtobus\n 3-Poyezd\n 4-Samalyot\n");
    printf("Transport vositalaridan birini tanlang: ");
    scanf("%d", &son);

    switch (son){
        case 1:
            printf("Avtomobil");
            break;
        case 2:
            printf("Avtobus");
            break;
        case 3:
            printf("Poyezd");
            break;
        case 4:
            printf("Samalyot");
            break;
        default :
        printf("Bunday transport turi yo'q");
            break;
    }
    return 0;
}