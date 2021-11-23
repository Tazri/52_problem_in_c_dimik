#include <stdio.h>

// create necessary variable
int number_list[1001];

int main(void){
    // create necessary variable
    int t, // for store test case
        size, // size of array
        track, // track the array
        missing_number; // store missing number

    // assign 0 all value in number_list
    for(track = 0; track <= 1001;track++){
        number_list[track] = 0;
    }

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get array
        scanf("%d",&size);
        int array[size - 1];
        for(track = 0;track < size-1;track++){
            scanf("%d",&array[track]);
        }

        // logic --> figure out missing number
        for(track = 0; track < size-1;track++){
            number_list[array[track]] = 1;
        }

        for(track = 1; track <= size;track++){
            if(number_list[track] == 0){
                missing_number = track;
            }else{
                number_list[track] = 0;
            }
        }

        printf("%d\n",missing_number);
    }

    return 0;
}