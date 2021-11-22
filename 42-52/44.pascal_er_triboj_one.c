#include <stdio.h>

// function prototype
void print_line(int *,int); // print line

int main(void){
    // create necessary variable
    int t, // store test case
        line[22], // store line of pascal triangle
        total_line, // how many line print
        line_number, // store current line number
        prev_term, // store prevous term in pascal trianlge
        i,j; // for iterate

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get total line
        scanf("%d",&total_line);

        // logic --> print pascal triangle
        if(total_line == 1){
            printf("1\n1 1\n");
        }else{
            // create pascal line and print it
            printf("1\n1 1\n");

            // initial value of pascal
            line[0] = 1;
            line[1] = 1;
            prev_term = 1;

            // next line
            total_line++;
            line_number = 3;
            while(line_number <= total_line){
                for(i = 1; i < (line_number-1);i++){
                    int temp = line[i];
                    line[i] = line[i] + prev_term;
                    prev_term = temp;
                }
                line[i] = 1;

                print_line(line,line_number);
                printf("\n");
                line_number++;
            }
            printf("\n");
        }
    }

    return 0;
}

// print_line fuction
void print_line(int *line,int size){
    // create necessary variable
    int i; // for iterate the array

    // print the line
    for(i = 0; i < size -1;i++){
        printf("%d ",*(line+i));
    }
    printf("%d",*(line+i));
}