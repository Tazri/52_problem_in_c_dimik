#include <stdio.h>

// function prototype
long long int fact(int);

int main(void){
    // get test case
    int test;
    scanf("%d",&test);

    while(test--){
        // get number
        int number;

        scanf("%d",&number);

        printf("%lld\n",fact(number));
    }

    return 0;
}

// fact function
long long int fact(int n){
    if(n == 2){
        return 2;
    }else if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}