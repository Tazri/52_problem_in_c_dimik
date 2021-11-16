#include <stdio.h>

int main(void){
    // create necessary variable
    int t, // for test case
        day; // how many day gopi stay in earth
    double food; // gopy food;

    // get test case (t)
    scanf("%d",&t);

    while(t--){
        // get food
        scanf("%lf",&food);

        // calculate how many day gopi stay in earth
        day = 0;
        while((int)food != 0){
            food/= 2;
            day++;
        }

        // print days
        printf("%d days\n",day);
    }
    return 0;
}