#include <stdio.h>


int main(){

    int num = 10, y = 0;

    while (num <= 30){
        y += num;
        num++;
    }
    printf("Sonlar yig'indisi: %d\n", y);
    
    return 0;
}