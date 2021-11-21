#include <stdio.h>

/**
 * solution : this program solve 2 way
 * 
 * first way:
 * use equation of geomatric progression
 * 
 * secound way : 
 * manually figure out sum
 * 
 * */


/************************** first way ****************************/

// function prototype
// long int power(int,int); // get power

// int main(void){
//     // create necessary variable
//     int      t, // for test case
//              base, // store base (x)
//              total_term; // store nth number progression (k)
//     long int sum; // sum of progression;

//     // get test case (t)
//     scanf("%d",&t);

//     // run the program
//     while(t--){
//         // get number of term and base
//         scanf("%d %d",&base,&total_term);

//         // get sum
//         sum = (
//            (base * (power(base,total_term) - 1)) / (base - 1)
//         ) ;

//         if(total_term >= 1){
//             sum += 1;
//         }

//         printf("Result = %ld\n",sum);
//     }

//     return 0;
// }

// // pow function
// long int power(int base,int power){
//     if(power == 0){
//         return 1;
//     }else if(base == 0){
//         return 0;
//     }else {
//         // create necessary variable
//         int result = 1, // store base^power
//             i; // for iterate

//         for(i = 0; i < power;i++){
//             result *= base;
//         }
//         return result;
//     }
// }

/************************** finish *******************************/


/************************** secound way **************************/

int main(void){
    // create necessary variable
    int t, // for store test case
        base, // for store base (x)
        total_term, // store total_term (k)
        term, // store any term of geomatric progression
        i, // for iterate the loop
        sum; // sum of geomatric progression

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get base and total_term
        scanf("%d %d",&base,&total_term);

        // if base == 0 or total_term = 0
        if(base == 0){
            sum = 0;
        }else if(total_term == 0){
            sum = 0;
        }else if(total_term == 1){
            sum = base;
        }else{
            sum = base + 1;
            term = base;

            for(i = 0; i < (total_term-1) ;i++){
                term *= base;
                sum += term;
            }
        }

        printf("Result = %d\n",sum);
    }
}

/************************** finish *******************************/