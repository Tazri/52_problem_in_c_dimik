#include <stdio.h>
#include <string.h>

// define some constant
#define TRUE 1
#define FALSE 0

int main(void){
    // create necessary variable
    char word[1005]; // store word
    int  t, // for store test case
         last_index, // store word last index
         is_palindrome, // for check word is pallendrom or not
         i,j; //for iterate the word

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get word
        scanf(" %[^\n]",word);

        // get last intdex
        last_index = strlen(word) - 1;

        // logic --> is pallandrom or not
        is_palindrome = TRUE;
        for(i = 0,j = last_index; i <= last_index;i++,j--){
            if(word[i] != word[j]){
                is_palindrome = FALSE;
                break;
            }
        }

        // print is pallendrom or not
        if(is_palindrome){
            printf("Yes! It is palindrome!\n");
        }else{
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}