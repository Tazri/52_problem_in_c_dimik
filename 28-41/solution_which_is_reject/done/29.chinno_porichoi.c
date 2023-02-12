#include <stdio.h>

int main(void){
    // create necessary variable
    int  t; // store how may time run this program
    char c; // store character from user

    // get test case (t)
    scanf("%d",&t);
    getchar(); // reserved Enter('\n')

    // run the program
    while(t--){
        // get charecter from user
        scanf("%c",&c);
        getchar(); // reserved Enter('n')

        // create logic
        if(c >= 'a' && c <= 'z'){
            printf("Lowercase Character\n");
        }else if(c >= 'A' && c <= 'Z'){
            printf("Uppercase Character\n");
        }else if(c >= '0' && c <= '9'){
            printf("Numerical Digit\n");
        }else{
            printf("Special Character\n");
        }
    }

    return 0;
}