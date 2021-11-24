#include <stdio.h>

int main(void){
    // create necessary variable
    char s[55]; // for store string
    int  t, // for store test case
         i; // for iterate the loop

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get string
        scanf(" %[^\n]",s);

        // logic --> modify string
        for(i = 0;s[i] != '\0';i++){
            if(s[i] == 'R'){
                s[i] = s[i+1];
            }else if(s[i] == 'L'){
                s[i] = s[i-1];
            }
        }

        printf("%s\n",s);
    }

    return 0;
}