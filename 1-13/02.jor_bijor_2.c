#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int test;
    char number[105];

    // get test
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        // get number
        gets(number);
        char last_char = number[strlen(number)-1];

        if(last_char & 1){
            printf("odd\n");
        }else{
            printf("even\n");
        }
    }
    
    return 0;
}