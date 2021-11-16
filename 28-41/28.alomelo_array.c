#include <stdio.h>

// define some constant
#define TRUE 1
#define FALSE 0

// function prototype
int is_upper_order(int [],int); // check array is upper order
int is_lower_order(int [],int); // check array is lower order

int main(void){
    // create necessary variable
    int t, // store how many time this program run
        size, // store array size
        i; // for iterate

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get array size
        scanf("%d",&size);
        
        // create array and get all element
        int array[size];
        for(i = 0; i < size;i++){
            scanf("%d",&array[i]);
        }

        // logic for figure out array in order or not
        if(size <= 2){
            printf("YES\n");
        }else if(is_upper_order(array,size)){
            printf("YES\n");
        }else if(is_lower_order(array,size)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

// is_uppder_order function
int is_upper_order(int n[],int s){
    /**
     * n for number array
     * s for size of n
     * 
     * */

    // create necessary variable
    int i, // for iterate
        in_order = TRUE; // think first array in order
    
    // logic to check is upper order
    for(i = 1; i < s;i++){
        if(n[i] < n[i-1]){
            in_order = FALSE;
            break;
        }
    }

    return in_order;
}

// is_lower_order function
int is_lower_order(int n[],int s){
    /**
     * n for number array
     * s for size of n
     * 
     * */

    // create necessary variable
    int i, // for iterate
        in_order = TRUE; // think first array in order

    // logic to check is lower order
    for(i = 1; i < s;i++){
        if(n[i] > n[i-1]){
            in_order = FALSE;
            break;
        }
    }

    return in_order;
}