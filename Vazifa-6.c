#include <stdio.h>

int main(){
    int num = 1,a = 5, y = 0;

    while (num <= 10){
        y += a;
        num++;
    }
    printf("Daftarlarning umumiy narhi: %d\n", y);
    
    return 0;
}