#include <stdio.h>
#include <string.h>

// function prototype
int word_count(char []); // find how many word in string;
int fact(int); // find facterial

int main(void){
    // create necessary variable
    int test, // test for test case
        length,
        total_word; // store sentence length
    char sentence[220]; // for sentence

    // get test
    scanf("%d",&test);
    getchar();

    // start program
    while (test--)
    {
        // get sentence from user
        gets(sentence);

        // calculate total word
        total_word = word_count(sentence);
    }
    

    return 0;
}

// word_count function
int word_count(char s[]){
    // create variable
    int length = strlen(s);
    int i, // for iterate the sentence
        word = 0, // for count word
        start = 0; // is word is start or not ?

    // start to count
    for(i = 0; i < length;i++){
        // if s[i] != ' ';
        if(s[i] != ' ' && !start){
            start = 1;
            word++;
        }

        // if s[i] == ' ' && s[i-1] != ' '
        if(s[i] == ' ' && s[i-1] != ' '){
            start = 0;
        }
    }

    return word;
}

// fact
int fact(int n){
    int i,facterial = 1;
    
    // find facterial
    for(i = n; n > 1;i--){
        facterial*=i;
    }

    // return facterial
    return facterial;
}