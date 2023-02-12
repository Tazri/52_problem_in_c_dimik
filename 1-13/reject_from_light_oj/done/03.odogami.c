/*
this answare is totaly wrong, here i put the extra space after the last number
which is incorrect
*/

#include <stdio.h>

int main(){
    for(int i = 1000;i >= 1;i-=5){
        printf("%d %d %d %d %d\n",i,i-1,i-2,i-3,i-4,i-5);
    }

    return 0;
}