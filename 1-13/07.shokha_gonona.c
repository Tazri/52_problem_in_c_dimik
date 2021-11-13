#include <stdio.h>
#include <stdlib.h>

int main(void){
    // get test
    int test;
    scanf("%d",&test);
    getchar();

    while (test--)
    {
        // create necessary variable
        char line[1000];
        char *start = line;
        char *end;
        long int number;
        int count = 0;

        // get line of number
        gets(line);

        while(1){
            number = strtol(start,&end,10);

            if(start == end){
                break;
            }
            
            // change start
            count++;
            start = end;
            end = NULL;
        }

        printf("%d\n",count);
    }
    
    return 0;
}