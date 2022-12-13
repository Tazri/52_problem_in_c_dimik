#include <stdio.h>

int main(void){

    for(int i = 1000; i >= 1; i--){
        if(i%5 == 0){
            printf("\n");
        }

        // print the number
        printf("%d\t",i);
    }
    return 0;
}