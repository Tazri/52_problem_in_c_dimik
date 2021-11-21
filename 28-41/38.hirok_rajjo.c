#include <stdio.h>

// function prototype
void print_hill(int,int); // print hill 
void print_reverse_hill(int,int); // print reverse hill

int main(void){
    // create necessary variable
    int t, // for store test case
        size, // size of daimond
        c; // store character 1 to 9

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get size and character
        scanf("%d %d",&size,&c);

        // print daimong
        print_hill(c,size);
        print_reverse_hill(c,size-1);
        printf("\n");
    }
    
    return 0;
}

// print_hill function 
void print_hill(int c,int n){
    /**
     * c -> store char 1 to 9
     * n -> size of hill
     * 
     * */

    // create necessary variable
    int i,j; // for iterate

    // logic : print hill
    for(i = 0; i < n;i++){
        for(j = 0; j <= i;j++){
            if(!j){
                printf("%d",c);
            }else{
                printf(" %d",c);
            }
        }
        printf("\n");
    }
}

// print_reverse_hill funciton
void print_reverse_hill(int c,int n){
    /**
     * c -> store char 1 to 9
     * n -> size of hill
     * 
     * */

    // create necessary variable
    int i,j; // for iterate

    // logic : print reverse hill
    for(i = n; i > 0;i--){
        for(j = 0; j < i;j++){
            if(!j){
                printf("%d",c);
            }else{
                printf(" %d",c);
            }
        }
        printf("\n");
    }
}