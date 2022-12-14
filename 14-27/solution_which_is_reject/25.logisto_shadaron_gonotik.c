#include <stdio.h>
#include <math.h>

// function prototype
void print_lcm(int); // print L.C.M.
int figure_out_lcm(int,int); // for figure out two number L.C.M

int main(void){
    // create necessary variable
    int t, // for test case
        n_one, // for number one
        n_two, // for number two
        lcm, // for store lcm of n_one and n_two
        i; // for iterate

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get two number from user
        scanf("%d %d",&n_one,&n_two);

        // if a == b
        if(n_one == n_two){
            print_lcm(n_one);
        }
        // if one divide another without remainder
        else if(n_one % n_two == 0 || n_two % n_one == 0){
            print_lcm(n_one > n_two ? n_one : n_two);
        }

        // if one number is 1
        else if(n_one == 1 || n_two == 1){
            print_lcm(n_one == 1 ? n_two : n_one);
        }

        // else find out the lcm
        else{
            lcm = figure_out_lcm(n_one,n_two);
            print_lcm(lcm);
        }
    }

    return 0;
}

// function print_lcm
void print_lcm(int n){
    printf("LCM = %d\n",n);
}

// function figure_out_lcm
int figure_out_lcm(int one,int two){
    // create necessary variable
    int i, // for iterate
        lcm = 1, // store lcm;
        a, // for number one
        b; // for number two

    // logic for figure out L.C.M
    a = one < two ? one : two;
    b = one == a ? two : one;
    for(i = 2; i <= b;){
        // if both  divided by i without remaider
        if(a % i == 0 && b % i == 0){
            a /= i;
            b /= i;
            lcm*=i;
        }else{
            i++;
        }

        // if i > a or i > b
        if(i > a || i > b){
            break;
        }
    }

    // lcm
    return lcm *= a * b;
}