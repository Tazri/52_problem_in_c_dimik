#include <stdio.h>

int main(void){
    // create necessary variable
    int         t; // for test case
    long int    divider_one, // first divider
                divider_two, // second divider
                i, // for iterate the loop
                limit; // store limit

    // get test case
    scanf("%d",&t);

    // run the program
    while(t--){
        // get divider_one, divider_two and limit
        scanf("%ld %ld %ld",&divider_one,&divider_two,&limit);

        // logic : print all mulitplyer which is divide by divider_one and divider_two
        i = divider_one < divider_two ? divider_one : divider_two;
        for(; i <= limit;i++){
            if(i%divider_one == 0 && i%divider_two == 0){
                printf("%ld\n",i);
            }
        }
        printf("\n");
    }
    return 0;
}

// light oj time limit exceed