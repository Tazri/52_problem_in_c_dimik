#include <stdio.h>
#include <string.h>

int main(void){
    // create necessary variable
    char w[1002]; // store word from user
    int test_case, // store how many time run this program
        index; // for iterate the word

    // get test_case
    scanf("%d",&test_case);

    // run the program
    while(test_case--){
        // get the word(w[])
        scanf(" %[^\n]",w);

        // print the word in reversere
        for(index = strlen(w)-1; index >= 0;index--){
            printf("%c",w[index]);
        }
        printf("\n");
    }

    

    return 0;
}