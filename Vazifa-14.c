#include <stdio.h>

int main() {
    int tanlov;
    float natija, sum;
    float USD = 12056, EUR = 13572, RUB = 146;
    
    printf("1-Dollar (USD = 12056)\n2-Yevro (EUR = 13572)\n3-Rubl (RUB = 146)\n");
    printf("Valyutani tanlang: ");
    scanf("%d", &tanlov);

    switch (tanlov){
        case 1:
            printf("Dollar (USD)\n");
            printf("Summani kiriting UZS da: ");
            scanf("%f", &sum);
            natija = sum / USD;
            printf("%.0f sum = %.1f dollar", sum, natija);
            break;
        case 2:
            printf("Yevro (EUR)\n");
            printf("Summani kiriting UZS da: ");
            scanf("%f", &sum);
            natija = sum / EUR;
            printf("%.0f sum = %.1f yevro", sum, natija);
            break;
        case 3:
            printf("Rubl (RUB)\n");
            printf("Summani kiriting UZS da: ");
            scanf("%f", &sum);
            natija = sum / RUB;
            printf("%.0f sum = %.1f rubl", sum, natija);
            break;
        default :
            printf("Bunday valyuta turi mavjud emas");
            break;
    }
    return 0;
}