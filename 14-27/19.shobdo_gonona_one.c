#include <stdio.h>

// function prototype
void print_total_word(int); // print total word

int main(void){
    // create necessary variable
    char s[10002]; // for store sentence from user
    int test_case, // store how many time program run
        count_space, // count space
        index; // for iterate the string(s[])

    // get test_case
    scanf("%d",&test_case);

    // run the program
    while(test_case--){
        // get sentence(s[]) from user
        scanf(" %[^\n]",s);

        // iterate the sentence
        count_space = 0;
        for(index = 0;s[index] != '\0';index++){
            count_space = s[index] == ' ' ? count_space + 1 : count_space;
        }

        // print total word
        if(!index){
            print_total_word(0);
        }else{
            print_total_word(count_space + 1);
        }
    }
}

// function print_total_word
void print_total_word(int w){
    printf("Count = %d\n",w);
}