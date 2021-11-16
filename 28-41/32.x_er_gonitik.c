#include <stdio.h>

int main(void){
    // create necessary variable
    int t, // store how many time program run
        x, // find wich multiply
        n, // limit of multiply
        sum, // result of multiplyer
        i; // for iterate

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get x and n
        scanf("%d %d",&x,&n);

        // x > n
        if(x > n){
            printf("Invalid!\n");
        }else{
            // logic : print multiplyer
            for(sum = x; sum <= n;sum+=x){
                printf("%d\n",sum);
            }
        }
        printf("\n");
    }
    return 0;
}