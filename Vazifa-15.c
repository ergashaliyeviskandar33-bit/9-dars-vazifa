#include <stdio.h>

int main() {
    int num1, num2, natija;
    char belgi;

    printf("Birinchi sonni kiriting: ");
    scanf("%d", &num1);
    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &num2);
    printf("Amal belgisini kiriting: ");
    scanf(" %c", &belgi);
    
    switch (belgi){
        case '+':
            natija = num1 + num2;
            printf("%d + %d = %d", num1, num2, natija);
            break;
        case '-':
            natija = num1 - num2;
            printf("%d - %d = %d", num1, num2, natija);
            break;
        case '*':
            natija = num1 * num2;
            printf("%d * %d = %d", num1, num2, natija);
            break;
        case '/':
            if (num2 != 0){
                natija = num1 / num2;
                printf("%d / %d = %d", num1, num2, natija);
            } else {
                printf("Nolga bo'lish xato");
            }
            break;
        default:
            printf("Bunday amal yo'q");
            break;
    }
    return 0;
}