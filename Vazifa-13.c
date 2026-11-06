#include <stdio.h>

int main() {
    int son;

    printf("1-Osh\n2-Lag'mon\n3-Manti\n4-Sho'rva\n5-Somsa\n");
    printf("Taomlardan birini tanlang: ");
    scanf("%d", &son);

    switch (son){
        case 1:
            printf("Osh");
            break;
        case 2:
            printf("Lag'mon");
            break;
        case 3:
            printf("Manti");
            break;
        case 4:
            printf("Sho'rva");
            break;
        case 5:
            printf("Somsa");
            break;
        default :
            printf("Bunday taom turi yo'q");
            break;
    }
    return 0;
}