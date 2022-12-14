#include <stdio.h> 
#include <math.h>

// define some constant
#define SIZE 1000000
#define SIZE_TWO 1000
#define TRUE 1
#define FALSE 0

// create necessary variable
int prime[SIZE+1]; // sieve filter
int pl[SIZE], // store only prime number
    total_prime_number; // total prime number in 1 to SIZE

// function prototype
void sieve(void); // create prime array
void print_message(long long int,int); // print is prime or not

int main(void){
    // create necessary variable
    int           t, // for store test case
                  sqrt_n, // store sqrt of number (n)
                  is_prime, // for check is prime or not
                  i,j; // for iterate the loop
    long long int n; // store number which chech is prime or not

    // create prime list or pl and sieve
    sieve();

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get number
        scanf("%lld",&n);

        // logic --> is prime or not
        if(!(n & 1) && n != 2){
            print_message(n,0);
        }else if(n <= 1000000){
            if(prime[n]){
                print_message(n,1);
            }else{
                print_message(n,0);
            }
        }else if(n > 1000000){
            sqrt_n = sqrt(n);
            is_prime = TRUE;

            for(i = 0;pl[i] < sqrt_n;i++){
                if(n % pl[i] == 0){
                    is_prime = FALSE;
                }
            }

            if(is_prime){
                print_message(n,1);
            }else{
                print_message(n,0);
            }
        }
    }


    return 0;
}

// sieve function
void sieve(void){
    // create necessary variable
    int track, // for track
        i,j; // for iterate the array

    // logic --> eratothenes filter
    for(track = 0;track <= SIZE;track++){
        prime[track] = 1;
    }

    i = 0;
    for(track = 2; track <= SIZE_TWO;track++){
        if(prime[track]){
            for(i = 2;track * i <= SIZE;i++){
                prime[track*i] = 0;
            }
        }
    }

    for(j = 0,track;track <= SIZE;track++){
        if(prime[track]){
            pl[j++] = track;

        }
    }
    pl[j] = 0;
}

void print_message(long long int n,int is_prime){
    if(is_prime){
        printf("%lld is a prime\n",n);
    }else{
        printf("%lld is not a prime\n",n);
    }
}