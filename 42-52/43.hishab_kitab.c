#include <stdio.h>

int main(void){
    // create necessary variable
    int t, // store test case
        base, // for store base (p)
        power, // for store power
        divider, // store divider
        mod, // for store remainder
        i; // for iterate the loop

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get base, power and divider
        scanf("%d %d %d",&base,&power,&divider);

        // logic --> figure out base^power [mods] divider
        while(power % divider == 0){
            power /= divider;
        }

        mod = base%divider ;
        for(i = 1; i < power;i++){
            mod = (mod*base)%divider; 
        }

        printf("Result = %d\n",mod);
    }

    return 0;
}