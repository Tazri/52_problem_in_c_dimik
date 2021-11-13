#include <stdio.h>

int main(void){
    int number,T;

    scanf("%d",&T);

    while (T--)
    {
        // get number
        scanf("%d",&number);
        
        if(number & 1){
            printf("odd\n");
        }else{
            printf("even\n");
        }
    }
    
    
    return 0;
}