#include <stdio.h>
#include <math.h>

// define some constant
#define TRUE 1
#define FALSE 0

/**
 * There two way solve this problem
 * first is calculate the whole number 
 * and secound is make first perfect number 
 * of array in range 1 to 40000000 then run 
 * the program.
 * 
 * */

/**
 * solution one
 * 
 * in this solution we calculate the
 * perfect number for check
 * 
 * */

/*************************************Start**************************************/

// function prototype
// int is_perfect(long long int);

// int main(void){
//     // create necessary variable
//     int              t; // for test case
//     long long int    n, // store value to limit
//                      i; // for iterate

//     // get test case (t)
//     scanf("%d",&t);

//     // run the program
//     while(t--){
//         // get min and max from user
//         scanf("%lld",&n);

//         // check all 
//         for(i = 1; i < n;i++){
//             if(is_perfect(i)){
//                 printf("%lld\n",i);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // is_perfect function
// int is_perfect(long long int n/* number */){
//     // create necessary variable
//     long long int root_n, // store sqoure root of n
//                   divider, // divide n
//                   sum_of_dividers; // store all sum of divider

//     // logic : is perfect or not ?
//     if(n <= 1){
//         return FALSE;
//     }else{
//         sum_of_dividers = 1;
//         root_n = (long long int)sqrt(n);

//         // find out sum_of_dividers
//         for(divider = 2;divider <= root_n;divider++){
//             if(n % divider == 0){
//                 sum_of_dividers += divider + (n/divider);
//             }
//         }

//         // check is perfect number or not
//         if(sum_of_dividers == n){
//             return TRUE;
//         }else{
//             return FALSE;
//         }
//     }
// }

/********************************* FINISH *********************************/

/**
 * solution two
 * 
 * In this solution first store all pefect number
 * in array from 1 to 40000000 then write all 
 * program
 * 
 * */

int main(void){
    // create necessary variable
    int t, // store how many time program run
        n, // store value to print perfect number in 1 to n
        i; // for iterate
    
    // create pefect_number_list
    int perfect_number_list[5] = {
        6,28,496,8128,33550336
    };

    // get test case (t);
    scanf("%d",&t);

    // run the program
    while(t--){
        // get value from user
        scanf("%d",&n);

        // print perfect number from 0 to 40000000
        for(i = 0; i < 5;i++){
            if(perfect_number_list[i] <= n){
                printf("%d\n",perfect_number_list[i]);
            }
        }
        printf("\n");
    }
}