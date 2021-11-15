#include <stdio.h>
#include <string.h>

// function prototype
void print_reverse(char []); // print the string in reverse

int main(void){
    // necessary variable
    char s[1002], // for sentence which come from user
         w[1002]; // for store word
    int test_case, // store how many time run this program
        i, // for iterate
        w_index; // for store w[] string index 

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentene
        scanf("%[^\n]",s);
        getchar();

        for(i = 0,w_index = 0; i < strlen(s);i++){
            // if s[i] != ' '
            if(s[i] != ' '){
                w[w_index++] = s[i];
            }else if(w_index > 0){
                // if w_index > 0 then close the word(w[])
                w[w_index] = '\0';
                print_reverse(w);
                printf(" ");
                // reset the w_index to 0
                w_index = 0;
            }
        }
        // build last word and print it in reverse
        w[w_index] = '\0';
        print_reverse(w);
        printf("\n");
        
    }
}

// print_reverse function
void print_reverse(char w[] /* w means word */){
    // necessary variable
    int i; // for iterate
    
    for(i = strlen(w) - 1; i >= 0;i--){
        printf("%c",w[i]);
    }
}