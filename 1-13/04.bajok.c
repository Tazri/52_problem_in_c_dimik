#include <stdio.h>

int main(void){
    // create necessary variable
    int test_case,number;

    // get test case
    scanf("%d",&test_case);

    // create for loop
    for(int i = 0; i < test_case;i++){
        // get number from user
        scanf("%d",&number);

        printf("Case %d: 1 ",i+1);

        // start printing
        for(int j = 2; j < number;j++){
            if(!(number%j)){
                printf("%d ",j);
            }
        }

        // finish printing
        printf("%d\n",number);
    }
}