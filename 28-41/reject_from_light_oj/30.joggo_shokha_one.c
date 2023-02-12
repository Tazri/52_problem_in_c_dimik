#include <stdio.h>

#define true 1;
#define false 0;
#define perfect printf("YES, %llu is a perfect number!\n",n)
#define not_perfect printf("NO, %llu is not a perfect number!\n",n)

int main(void){

    // create necessary variable
    int t, // store how many time program run
        i, // for iterate
        j, // for track input no
        is_pefect;

    char temp; // store_temporary thing

    // create pefect_number_list
    unsigned long long int perfect_number_list[5] = {
        6,28,496,8128,33550336
    };

    unsigned long long int n; // store the single input

    // get test case (t);
    scanf("%d",&t);

    // create input arr
    unsigned long long int all_case[t];

    // get case input;
    for(i = 0;i < t;i++){
        scanf("%llu%c",&all_case[i],&temp);
    }

    for(j = 0; j < t;j++){
        n = all_case[j]; // store single input
        is_pefect = false; // assume that n is not pefect

        for(i = 0;i < 5;i++){
            if(all_case[j] == perfect_number_list[i]){
                perfect;
                is_pefect = true;
                break;
            }
        }

        if(!is_pefect){
            not_perfect;
        }
    }
    return 0;
}