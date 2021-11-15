#include <stdio.h>
#include <string.h>

int main(void){
    // necessary variable
    char s[10002]; // for store sentence from user
    char *word; // for strtok
    int test_case, // how many time program run
        count; // for count word

    // get test_case
    scanf("%d",&test_case);

    while(test_case--){
        // get sentence(s[])
        scanf(" %[^\n]",s);

        // start counting
        count = 0;
        word = strtok(s,",!;?. ");
        while(word != NULL){
            // counting word and reset *word
            count = strlen(word) > 0 ? count + 1 : count;
            word = strtok(NULL,",!;?. ");
        }

        printf("Count = %d\n",count);
    }

    /**
     * Splits str[] according to given delimiters
     * and returns next token. It needs to be called
     * in a loop to get all tokens. It returns null
     * when there are no more tokens.
     * 
     * strtok prototype :
     * char * strtok(char str[],const char *delims);
     * 
     * */

    return 0;
}