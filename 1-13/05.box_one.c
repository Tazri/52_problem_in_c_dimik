#include <stdio.h>

int main(void){
    // create necessary variable
    int test,size;

    // get test case
    scanf("%d",&test);

    // start printing box
    while(test--){
        // get size
        scanf("%d",&size);

        // printing box with star
        for(int row = 0; row < size;row++){
            for(int col = 0; col < size;col++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}