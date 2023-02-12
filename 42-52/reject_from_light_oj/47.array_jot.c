#include <stdio.h>

int main(void){
    // create necessary variable
    int t, // store test case
        track_one, //track first array
        track_two, // track secound array
        track_three, // track third array
        size_one, // size of array one
        size_two, // size of array two
        size_three; // size of thirds array

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get first array
        scanf("%d",&size_one);
        int array_one[size_one];
        for(track_one = 0; track_one < size_one;track_one++){
            scanf("%d",&array_one[track_one]);
        }

        // get secound array
        scanf("%d",&size_two);
        int array_two[size_two];
        for(track_two = 0; track_two < size_two;track_two++){
            scanf("%d",&array_two[track_two]);
        }

        // create thirds array
        size_three = size_one + size_two;
        int array_three[size_three];

        // logic --> sorted two array in third array together
        track_one = 0;
        track_two = 0;
        track_three = 0;

        while(track_three < size_three){
            // if any track not out of range
            if(track_one < size_one && track_two < size_three){
                if(array_one[track_one] <  array_two[track_two]){
                    array_three[track_three++] = array_one[track_one++];
                }else{
                    array_three[track_three++] = array_two[track_two++];
                }
            }else{
                if(track_one < size_one){
                    array_three[track_three++] = array_one[track_one++];
                }else if(track_two < size_two){
                    array_three[track_three++] = array_two[track_two++];
                }
            }
        }

        // print the array_three
        for(track_three = 0; track_three < size_three - 1;track_three++){
            printf("%d ",array_three[track_three]);
        }
        printf("%d\n",array_three[track_three]);
    }

    return 0;
}