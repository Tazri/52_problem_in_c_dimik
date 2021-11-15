#include <stdio.h>
#include <string.h>

// define constant
#define TRUE 1
#define FALSE 0

// function prototype
int word_count(char []); // find how many word in string;
int fact(int); // find facterial
int simillar_word_fact(char [],int); // find similar word facterial in word 

int main(void){
    // create necessary variable
    int test, // test for test case
        length,
        total_word, // store sentence length
        fact_simillar_word, // facterial of simillar word
        fact_total_word, // store total_word! (facterial)
        result; // store fact_total_word / fact_simillar_word

    char sentence[220]; // for sentence

    // get test
    scanf("%d",&test);
    getchar();

    // start program
    while (test--)
    {
        // get sentence from user
        gets(sentence);

        // calculate total_word!
        total_word = word_count(sentence);
        fact_total_word = fact(total_word);

        // calculate fact_simillar word and find fact_total_word / fact_similar_word
        fact_simillar_word =  simillar_word_fact(sentence,total_word);
        result = fact_total_word / fact_simillar_word;

        printf("1/%d\n",result);
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
    for(i = 2; i <= n;i++){
        facterial*=i;
    }

    // return facterial
    return facterial;
}

// similar_word_fact(char [],int)
int simillar_word_fact(char s[],int total_word){
    // create necessary variable
    char words[total_word][25];
    char copy_list[total_word][25];
    int i, // iterate the sentence(s)
        word_index = 0, // word index in words;
        j = 0, // iterate the word
        start = 0, // is start the word
        facterial = 1, // for simillar word facterial
        total_copy_word = 0, // number of element of copy_words
        in_copy_list, // check is word in copy_list or not
        simillar = 0; // find how many simillar word

    // start traverse sentence and collect the word into the words
    for(i = 0; i < strlen(s);i++){
        // if s[i] != ' '; starting the word
        if(s[i] != ' ' && !start){
            start = 1;
        }

        // if finish the word
        // if s[i] == ' ' && s[i-1] != ' '
        if(s[i] == ' ' && s[i-1] != ' '){
            start = 0;
            words[word_index][j] = '\0';
            word_index++;
            j = 0;
        }

        // if start = 1 then collect the word
        if(start){
            words[word_index][j] = s[i];
            j++;
        }
    }
    words[word_index][j] = '\0';


    // figure out copy word
    for(i = 0;i < total_word;i++){
        // think words[i] is not in copy
        in_copy_list = FALSE;
        simillar = 1;

        // iterate again
        for(j = i+1;j < total_word;j++){
            // if words[i] is duplicate
            if(!strcmp(words[i],words[j])){
                simillar++;
            }
        }

        // if words[i] have greater then 1
        if(simillar > 1){
            // check words[i] in copy list
            for(j = 0;j < total_copy_word;j++){
                if(!strcmp(words[i],copy_list[j])){
                    in_copy_list = TRUE;
                }
            }
        }

        /**
         * if words[i] have greather then 1
         * and it not exist copy list
         * 
         * */
        if(simillar > 1 && !in_copy_list){
            // find facterial and add copy list
            facterial = facterial * fact(simillar);
            strcpy(copy_list[total_copy_word++],words[i]);
        }
    }

    // return the facterial
    return facterial;
}