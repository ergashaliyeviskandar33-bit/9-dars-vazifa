#include <stdio.h>

int main() {
    int son;

    printf("1-Bahor\n2-Yoz\n3-Kuz\n4-Qish\n");
    printf("Fasillardan birini tanlang: ");
    scanf("%d", &son);

    switch (son){
        case 1:
            printf("Bahor");
            break;
        case 2:
            printf("Yoz");
            break;
        case 3:
            printf("Kuz");
            break;
        case 4:
            printf("Qish");
            break;
        default :
            printf("Bunday fasl yo'q");
            break;
    }
    return 0;
}