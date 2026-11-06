#include <stdio.h>

int main() {
    int son = 1, musbat = 0, manfiy = 0;
    while (son != 0){
        
        printf("Sonni kiriting: ");
        scanf("%d", &son);
        if (son > 0){
            musbat++;
        } else if (son < 0){
            manfiy++;
        }
    }
    printf("Musbat son: %d\n", musbat);
    printf("Manfiy son: %d", manfiy);
    
    return 0;
}