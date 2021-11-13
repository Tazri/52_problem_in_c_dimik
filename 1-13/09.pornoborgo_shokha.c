#include <stdio.h>
#include <math.h>

int main(void){
    // get test case
    int test;
    scanf("%d",&test);

    while(test--){
        int number,r;
        scanf("%d",&number);

        r = (int)sqrt((double)number);

        if(r*r == number){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}