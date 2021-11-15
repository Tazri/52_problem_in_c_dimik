#include <stdio.h>

int main(void){
    // create necessary variable
    int e[101]; // store all elements here
    int t, // store how many time program run
        total_element, // store how many element input
        index; // for iterate the elements(e[])
    
    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get all element from user
        scanf("%d",&total_element);
        for(index = 0;index < total_element;index++){
            scanf("%d",&e[index]);
        }

        // print the element
        if(total_element > 0){
            printf("%d",e[0]);
        }

        for(
            index = 2;
            index < total_element;
            index+=2)
        {
            printf(" %d",e[index]);
        }
        printf("\n");
    }
    return 0;
}