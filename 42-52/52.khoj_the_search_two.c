#include <stdio.h>
#include <string.h>

// define some constant
#define TRUE 1
#define FALSE 0

int main(void){
    // create necessary variable
    char string[150], // store string
         substring[150]; // store substring
    int t, // for store test case
        string_len, // store string len
        substring_len, // store substring len
        is_found, // check substring found or not found
        total_found, // total found substring
        i,j,k; // for iterate the loop

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get string and substring
        scanf(" %s %s",string,substring);

        // logic --> find substring in string
        string_len = strlen(string);
        substring_len = strlen(substring);
        total_found = 0;

        for(i = 0;i < (string_len - substring_len + 1);i++){
            is_found = TRUE;

            for(j = 0;j < substring_len;j++){
                if(string[i+j] != substring[j]){
                    is_found = FALSE;
                }
            }

            if(is_found){
                total_found++;
            }
        }

        // print total found
        printf("%d\n",total_found);
    }

    return 0;
}