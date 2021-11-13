#include <stdio.h>

int main(void){
    // get test from user
    int test;
    scanf("%d",&test);

    for(int k = 0; k < test;k++)
    {   
        // get three number from user
        int numbers[3];
        scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);

        // sorting
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(numbers[i] < numbers[j] ){
                    // swap
                    int temp = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = temp; 
                }
            }
        }

        // print the array
        printf("Case %d: ",k+1);
        printf("%d %d %d\n",numbers[0],numbers[1],numbers[2]);

    }
    
    int numbers[3];


    return 0;
}