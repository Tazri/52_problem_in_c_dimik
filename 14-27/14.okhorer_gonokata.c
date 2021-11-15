#include <stdio.h>

int main(void){
    // necessary variable
    char s[10001], // sentence whicn give from user
         c; // which character user want to count 
    int test_case, // for how many time program run
        total_char = 0, // count character which user want
        i; // for iterate the loop

    // get test case
    scanf("%d",&test_case);
    getchar();
    // run the program
    while(test_case--){
        // get sentence(s) and character
        scanf("%[^\n]",s);
        getchar();
        scanf("%c",&c);
        getchar();

        // count charecter(c)
        for(i = 0;s[i] != '\0';i++){
            // if s[i] == c
            total_char = s[i] == c ? total_char + 1 : total_char;
        }

        // if total_char == 0
        if(!total_char){
            printf("'%c' is not present\n",c);
        }else{
            printf("Occurrence of '%c' in '%s' = %d\n",c,s,total_char);
        }

        // reset total_char to 0
        total_char = 0;
    }
    return 0;
}