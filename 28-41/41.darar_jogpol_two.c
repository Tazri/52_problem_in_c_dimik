#include <stdio.h>

int main(void){
    // create necessary variable
    int             t; // for store test case
    long long int   total_term, // store total term
                    term, // store every term
                    i; // for iterate the loop
    double          sum; // store sum of progression

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get total term
        scanf("%lld",&total_term);

        // logic --> figure out sum of progression
        sum = 0;
        term = 1;
        for(i = 1; i <= total_term;i++){
            term *= i;
            sum += ((double)i/term);
        }

        printf("%0.4lf\n",sum);
    }
}