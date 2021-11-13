#include <stdio.h>

int main(void){
    // create necessary variable
    int test,number,first_digit,last_digit;

    // get test
    scanf("%d",&test);

    while (test--)
    {   
        // get 5 digit number
        scanf("%d",&number);

        // find out first and last digit
        first_digit = number % 10;
        last_digit = number / 10000;

        printf("Sum = %d\n",first_digit+last_digit);
        
    }
    
}