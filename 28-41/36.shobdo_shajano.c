#include <stdio.h>
#include <string.h>

int main(void){
    // create necessary variable
    char temp[10005]; // for store temporary word
    int  t, // for test case
         total_word, // store how many word enter user
         i,j; // for iterate the word list

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while (t--)
    {
        // get words
        scanf("%d",&total_word);

        // get all word
        char word_list[total_word][10005];
        for(i = 0; i < total_word;i++){
            scanf(" %[^\n]",word_list[i]);
        }
        
        // logic : sorted the word_list
        for(i = 0;i < total_word;i++){
            for(j = i+1;j < total_word; j++){
                // if first letter is biggest
                if(strcmp(word_list[i],word_list[j]) > 0){
                    // swap the word
                    strcpy(temp,word_list[j]);
                    strcpy(word_list[j],word_list[i]);
                    strcpy(word_list[i],temp);
                }
            }
        }

        // print the all word in sorted
        for(i = 0; i < total_word;i++){
            printf("%s\n",word_list[i]);
        }
    }
     
    return 0 ;
}