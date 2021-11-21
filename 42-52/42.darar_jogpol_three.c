#include <stdio.h>

// function prototype
void print_term(int); // print term

int main(void){
    // create necessary variable
    int t, // for store test case
        n, // store total term
        i; // for iterate the array

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get total term
        scanf("%d",&n);

        // logic --> print progression
        print_term(n);
        for(i = n-1; i >- 1;i--){
            printf(" + ");
            print_term(i);
        }
        printf("\n");
    }

    return 0;
}

// print_term function
void print_term(int n){
    if(n == 0){
        printf("1");
    }else if(n == 1){
        printf("2");
    }else{
        printf("2^%d",n);
    }
}