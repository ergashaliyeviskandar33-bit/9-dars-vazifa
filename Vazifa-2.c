#include <stdio.h>

int main(){
    int num = 3;

    while (num <= 30){
        if (num % 3 == 0){
            printf("%d\n", num);
    	}
    	num++;
        
    }
    return 0;
}