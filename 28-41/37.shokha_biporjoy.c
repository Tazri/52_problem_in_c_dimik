#include <stdio.h>
#include <string.h>

/**
 * 
 * problem : print the number in reverse way.
 * 
 * answare : this problem solve 2 way.
 * 
 * first :
 * store the number as a string and print it reverse
 * 
 * secound :
 * calculate last digit and print it every time
 * */

/******************************** first way ****************************************/

// int main(void){
//     // create necessary variable
//     char number[12];
//     int  t, // for store total test case
//          i; // for itreate the string

//     // get test case (t)
//     scanf("%d",&t);

//     // run the program
//     while (t--)
//     {
//         // get number
//         scanf(" %[^\n]",number);

//         // print it reverse
//         for(i = strlen(number);i>-1;i--){
//             printf("%c",number[i]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

/************************************ finish first way *****************************/


/************************************ secound way ***********************************/
int main(void){
    // create necessary variable
    int      t, // for test case
             last_digit; // for store every last digit
    long int number, // for store the number
             reverse_number; // store reverse_number

    // get test case (t)
    scanf("%d",&t);
    
    // run the program
    while(t--){
        // get number
        scanf("%ld",&number);

        // logic : print the number in reverse
        reverse_number = 0;
        while(number != 0){
            last_digit = number % 10;
            reverse_number *= 10;
            reverse_number += last_digit;
            number /= 10;
        }
        printf("%ld\n",reverse_number);
    }
    return 0;
}