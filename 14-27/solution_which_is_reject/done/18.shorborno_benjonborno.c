#include <stdio.h>

int main(void){
    // create necessary variable
    char s[10001]; // for store sentence
    
    int test_case, // store how many time run the program
        s_index; // iterate the sentence(s[])

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentence from user
        scanf(" %[^\n]",s);
        

        for(s_index = 0;s[s_index] != '\0';s_index++){
            // if s[s_index] is vowels
            if(
                s[s_index] == 'a' ||
                s[s_index] == 'e' ||
                s[s_index] == 'i' ||
                s[s_index] == 'o' ||
                s[s_index] == 'u' 
            ){
                printf("%c",s[s_index]);
            }
        }

        printf("\n");

        for(s_index = 0;s[s_index] != '\0';s_index++){
            // if s[s_index] is vowels
            if(
                s[s_index] != 'a' &&
                s[s_index] != 'e' &&
                s[s_index] != 'i' &&
                s[s_index] != 'o' &&
                s[s_index] != 'u' &&
                s[s_index] != ' '
            ){
                printf("%c",s[s_index]);
            }
        }
        printf("\n");
    }
}