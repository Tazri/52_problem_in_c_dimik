#include <stdio.h>

int main(void){
    // necessary variable
    char s[1010];
    
    int test_case, // for iterate
        i,j; // for testcase

    int count[26];

    for(i=0;i<26;i++){
        count[i] = 0;
    }

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentence
        scanf("%[^\n]",s);
        getchar();

        for(i = 0;s[i] != '\0';i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                count[s[i] - 'a']++;
            }
        }

        for(i = 0;i < 26;i++){
            if(count[i]){
                printf("%c = %d\n",'a'+i,count[i]);
                count[i] = 0;
            }
        }

        printf("\n");
    }

    return 0;
}