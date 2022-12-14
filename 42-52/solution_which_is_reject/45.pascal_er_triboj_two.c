#include <stdio.h>

// create necessary variable
long long int pascal[51][51];

// function prototype
void create_pascal(void); // create pascal pyramids
void print_line(int); // print line of pascal pyramids

int main(void){
    // create necessary variable
    int t, // for test case
        total_line; // store how many line print

    // get test case (t)
    scanf("%d",&t);

    // create_pascal
    create_pascal();

    // run the program
    while(t--){
        // get total line
        scanf("%d",&total_line);

        // prints pascal
        print_line(total_line+1);
    }

    return 0;
}

// create_pascal function
void create_pascal(void){
    // create necessary variable
    int i,j; // for iterate the loop

    // logic --> create pascal pyramids
    pascal[0][0] = 1;
    pascal[1][0] = 1;
    pascal[1][1] = 1;

    for(i = 2;i < 51;i++){
        pascal[i][0] = 1;
        for(j = 1; j < i;j++){
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
        pascal[i][j] = 1;
    }
}

// print_line function
void print_line(int total_line){
    // create necessary variable
    int row,col; // for iterate the pascal pyramids

    // logic --> print pascal pyramids
    for(row = 0; row < total_line;row++){
        for(col = 0; col < row;col++){
            printf("%lld ",pascal[row][col]);
        }
        printf("%lld\n",pascal[row][col]);
    }
    printf("\n");
}