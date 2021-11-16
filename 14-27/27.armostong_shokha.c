#include <stdio.h>

// function prototype
int cube(int); // return cube of n

int main(void){
    // create necessary variable
    int t, // store how many time this program run
        number, // store from user
        digit_one, // 1st digit from right
        digit_two, // 2nd digit
        digit_third; // third digit

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get numbers
        scanf("%d",&number);

        // calculate all digit
        digit_one = number % 10;
        digit_two = (number/10) % 10;
        digit_third = ((number/10)/10) % 10;

        // check is armostong number
        if( number 
            == 
            (cube(digit_one)) + 
            (cube(digit_two)) + 
            (cube(digit_third))
            ){
                // if number is sum all cube of digit 
                printf("%d is an armstrong number!\n",number);
            }else{
                printf("%d is not an armstrong number!\n",number);
            }
    }
    return 0;
}

// cube function
int cube(int n){
    return n*n*n;
}