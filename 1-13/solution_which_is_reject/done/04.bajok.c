#include <stdio.h>

int main(void){
    // create necessary variable
    int test_case,number,j,i;

    // get test case
    scanf("%d",&test_case);

    // create for loop
    for(int i = 1; i <= test_case;i++){
        // get number from user
        scanf("%d",&number);

        printf("Case %d:",i);

        // start printing
        for(j = 1; j <= number;j++){
            if(!(number%j)){
                printf(" %d",j);
            }
        }

        printf("\n");
    }
}