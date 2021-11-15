#include <stdio.h>
#include <string.h>

int main(void){
    // necessary variable
    char s[1001], // for sentence which give from user
         c; // for counting character
    int test_case, // for how many time this program test
        count, // for count charecter
        length, // length of sentence(s)
        i; // for iterate the array

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentence
        scanf("%[^\n]",s);
        getchar();

        // get length
        length = strlen(s);

        // start counting charecter
        for(c = 'a'; c <= 'z';c++){
            // traverse the sentence(s) for every charecter
            count = 0;
            for(i = 0; i < length;i++){
                // if s[i] == c
                count = s[i] == c ? count + 1 : count;   
            }

            // if count != 0
            if(count){
                printf("%c = %d\n",c,count);
            }
        }
        printf("\n");
        
    }

    return 0;
}