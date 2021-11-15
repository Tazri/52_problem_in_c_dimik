#include <stdio.h>
#include <math.h>

// constant
#define SIZE 10001 /* size of numbers */

int numbers[SIZE]; // containe numbers

void sieve(){
    // create necessary variable
    int index, // for iterate the numbers[]
        j, // for iterate
        stop_root; // where stop the loop

    // first think everything is prime number
    for(index = 0;index < SIZE;index++){
        numbers[index] = 1;
    }

    // markdown which is not prime number
    stop_root = sqrt(SIZE);
    for(index = 2; index < stop_root;index++){
        // if numbers is prime
        if(numbers[index] == 1){
            for(j = 2; j*index <= SIZE;j++){
                numbers[index*j] = 0;
            }
        }
    }

    // numbers[1] = 0 because 1 is not prime number
    numbers[1] = 0;
}

int main(void){
    int t, // for test case
        min, // for low value
        max, // for high value
        count; // store total prime number

    // get test case from user
    scanf("%d",&t);

    // call sevie 
    sieve();

    // run the program
    count = 0;
    while(t--){
        // get min and max from user
        scanf("%d %d",&min,&max);

        // storing total prime number
        while(min++ <= max){
            // if is prime number
            count = numbers[min-1] ? count + 1 : count;
        }

        // print total prime number and reset the count to 0
        printf("%d\n",count);
        count = 0;
    }
}