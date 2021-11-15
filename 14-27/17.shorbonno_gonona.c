#include <stdio.h>

int main(void){
    // create necessary variable
    char s[1002]; // for store sentence from user
    int test_case, // store how many time program run
        total_vowel = 0, // store total vowel in sentence(s[])
        index; // for iterate the sentence(s[])

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentence
        scanf("%[^\n]",s);
        getchar();

        // iterate the sentence
        for(index = 0;s[index] != '\0';index++){
            // if index == a,e,i,o,u
            if(
                s[index] == 'a' ||
                s[index] == 'e' ||
                s[index] == 'i' ||
                s[index] == 'o' ||
                s[index] == 'u'
            ){
                total_vowel++;
            }
        }

        // print total_vowels and reset total_vowel to 0
        printf("Number of vowels = %d\n",total_vowel);
        total_vowel = 0;
    }
}