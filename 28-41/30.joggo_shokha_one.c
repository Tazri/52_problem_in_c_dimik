#include <stdio.h>

int main(void){
    // create necessary variable
    int t; // store how many time program run
    unsigned long long int number, // store number from user
                           divider, // which user to divide number
                           half_of_number, // store squre root of number
                           sum_of_divider; // sum of all divider

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get number from user
        scanf("%llu",&number);

        // create logic for check number is prime number
        sum_of_divider = 0;
        half_of_number = number / 2;
        for(divider = 1; divider <= half_of_number;divider++){
            // number % divider == 0 ?
            if(number % divider == 0){
                sum_of_divider += divider;
            }
        }

        // check sum_of_divider == number
        if(sum_of_divider == number){
            printf("YES, %llu is a perfect number!\n",number);
        }else{
            printf("NO, %llu is not a perfect number!\n",number);
        }
    }

    return 0;
}