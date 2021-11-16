#include <stdio.h>
#include <math.h>

// create custom data type
typedef struct{
    double x;
    double y;
} Point;

// function prototype
double fd(Point *,Point *); // calculate distance of two point

int main(void){
    // create necessary variable
    int     t; // for test case
    Point   c, // for circle point
            p; // for point
    double  r; // radius of circle

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get circle, point and radius
        scanf("%lf %lf",&c.x,&c.y); // circle point
        scanf("%lf",&r); // radious
        scanf("%lf %lf",&p.x,&p.y); // point pointer

        // logic : is point out of circle
        if(fd(&c,&p) > r){
            printf("The point is not inside the circle\n");
        }else{
            printf("The point is inside the circle\n");
        }
    }


    return 0;
}

// fd function
double fd(Point *c,Point *p){
    // create necessary variable
    double diff_x = c->x - p->x; // different x2 - x1
    double diff_y = c->y - p-> y; // different y2 - y1
    double sum = (diff_x*diff_x) + (diff_y*diff_y); // sum of sqaure diff_x an diff_y

    //return squre root of sum
    return sqrt(sum);
}