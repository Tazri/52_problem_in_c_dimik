#include <stdio.h>
#include <math.h>

int main(void){
    // create necessaryv variable
    int     t, // store test case
            side_one, // store side one of triangle
            side_two, // store side two of triangle
            side_three; // store side three of triangle
    long double  half_perimeter, // store half of perimater of triangle
            area; // store area of triangle

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get all side of triangle
        scanf("%d %d %d",&side_one,&side_two,&side_three);

        // logic --> calculate area of triangle
        half_perimeter =  (long double)(side_one+side_two+side_three)/(long double)2;
        area = half_perimeter * 
                (half_perimeter - side_one) * 
                (half_perimeter - side_two) *
                (half_perimeter - side_three);
        area = (long double)sqrt(area);

        // print area
        printf("Area = %.3Lf\n",area);
    }

    return 0;
}