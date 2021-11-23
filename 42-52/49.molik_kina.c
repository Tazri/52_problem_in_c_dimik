#include <stdio.h> 
#include <math.h>

// define some constant
#define SIZE 1000000
#define SIZE_TWO 1000

// create necessary variable
int prime[SIZE+1],
    total_prime_numer; // total prime number in 1 to SIZE

// function prototype
void sieve(void); // create prime array

int main(void){

}

// sieve function
void sieve(void){
    // create necessary variable
    int track, // for track
        i,j; // for iterate the array

    // logic --> eratothenes filter
    for(track = 0;track <= SIZE;track++){
        prime[track] = 0;
    }

    for(track = 2; track <= SIZE_TWO;track++){
        if(prime[track]){
            for(i = 2;track * i <= SIZE;i++){
                prime[track*i] = 0;
            }
        }
    }


}