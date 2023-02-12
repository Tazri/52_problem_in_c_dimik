#include <stdio.h>

int main(void){
    // create necessary variable
    int i,test,col,row,size;

    scanf("%d",&test);

    for(i = 0;i < test;i++){
        scanf(" %d",&size);
        // printing box
        for(row = 0;row < size;row++){
            for(col = 0;col < size;col++){
                printf("*");
            }
            printf("\n");
        }

        if(i != test-1){
            printf("\n");
        }
    }

    return 0;
}