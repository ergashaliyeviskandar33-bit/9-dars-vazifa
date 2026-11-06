#include <stdio.h>
#include <math.h>

int main(){
    int num = 1, y = 0;

    while (num <= 10){
        y = pow(num, 2); 
        printf("%d - %d\n",num, y);
        num++;
        
    }
    return 0;
}