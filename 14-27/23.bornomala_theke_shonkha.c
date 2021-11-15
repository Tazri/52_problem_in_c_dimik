#include <stdio.h>

int main(void){
    // create necessary variable
    char s[102]; // store sentence from user
    int  T, // for test case
         index, // for iterate the sentence
         letter_number; // store letter number

    // get test case
    scanf("%d",&T);

    while(T--){
        // get sentence
        scanf(" %[^\n]",s);

        // iterate the sentence and print number
        for(index = 0; s[index] != '\0';index++){
            // if letter is A to Z
            if(s[index] >= 'A' && s[index] <= 'Z'){
                // convert letter to number and print
                letter_number = s[index] - 'A' + 1;
                printf("%d",letter_number);
            }
        }
        printf("\n");
    }

    return 0;
}