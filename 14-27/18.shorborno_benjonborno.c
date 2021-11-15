#include <stdio.h>

int main(void){
    // create necessary variable
    char s[10001], // for store sentence
         v[10001], // for store vowels
         c[10001]; // for store constant
    int test_case, // store how many time run the program
        s_index, // iterate the sentence(s[])
        v_index, // iterate the vowels(v[])
        c_index; // iterate the constant(c[])

    // get test_case
    scanf("%d",&test_case);
    getchar();

    // run the program
    while(test_case--){
        // get sentence from user
        scanf(" %[^\n]",s);
        

        // iterate the sentence
        v_index = 0;
        c_index = 0;
        for(s_index = 0;s[s_index] != '\0';s_index++){
            // if s[s_index] is vowels
            if(
                s[s_index] == 'a' ||
                s[s_index] == 'e' ||
                s[s_index] == 'i' ||
                s[s_index] == 'o' ||
                s[s_index] == 'u' 
            ){
                v[v_index++] = s[s_index];
            }

            // if s[s_index] is constant
            else if(s[s_index] > 'a' && s[s_index] <= 'z'){
                c[c_index++] = s[s_index];
            }
        }
        // close vowels string(v[]) and constant string(c[])
        v[v_index] = '\0';
        c[c_index] = '\0';

        // print vowels and constants
        if(v_index){
            printf("%s\n",v);
        }
        if(c_index){
            printf("%s\n",c);
        }
    }
}