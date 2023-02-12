#include <stdio.h>

int main(void){
    // create necessary variable
    int t, // for test case
        min, // low value of limit
        max, // high value of limit
        divider; // store divider
    
    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get min, max and divider
        scanf("%d %d %d",&min,&max,&divider);

        // logic : print all muliplayer of divider from min to max
        while(min <= max){
            if(min%divider == 0){
                printf("%d\n",min);
            }
            min++;
        }
        printf("\n");
    }
}