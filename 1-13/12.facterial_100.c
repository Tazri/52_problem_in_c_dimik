#include <stdio.h>

// function prototype
void find_five_two(int,int *,int *);

int main(void){
    // necessary variable
    int test, // how many time loop iterate
        number, // number from user
        total_two = 0,// count total two inside !number
        total_five = 0, // count total five inside !number
        i; // this for iterate loop

    // get test case
    scanf("%d",&test);

    // inerate the main loop
    while (test--)
    {
        // get number
        scanf("%d",&number);

        // create loop iterate reverse from number to 2
        for(i = 2; i <= number; i++){
            find_five_two(i,&total_two,&total_five);
        }

        // calculate how many zero in !number
        if(total_five <= 0 || total_two <= 0){
            printf("%d\n",0);
        }else if(total_two < total_five){
            printf("%d\n",total_two);
        }else{
            printf("%d\n",total_five);
        }
        
        // reset the total two and total_five
        total_two = 0;
        total_five = 0;
    }
    
    return 0;
}

// broke_number
void find_five_two(int n,int *two,int *five){
    // create necessary variable
    int divider = 2;
    int quotient = n;
    int total_five = 0;
    int total_two = 0;

    // divide n until quotient = 1;
    while (quotient != 1)
    {
        /**
         * if quotient divide by divider without remainder
         * */
        if(quotient%divider == 0){
            // update quotient
            quotient /= divider;

            // update total_five and total_two
            if(divider == 2){
                total_two++;
            }else if(divider == 5){
                total_five++;
            }
        }

        /**
         * if quotient not divide by divider without remainder
         * */
        if(quotient%divider != 0){
            divider++;
        }
    }
     
    // give the data inside the two and five
    *two = *two + total_two;
    *five = *five + total_five;
}