#include <stdio.h>

int main(void){
    // create necessary variable
    int test;
    double team_one, // team one run
           team_two, // team two run
           left_ball, // total left ball
           current_average_run, // average run by over
           need_average_run, // need average run rate to win
           targeted_run, // targeted run to win
           over_gone, // over gone 
           over_left; // over left
    
    // get test
    scanf("%d",&test);

    while(test--){
        // get team_one , team_two run and left_ball;
        scanf("%lf %lf %lf",&team_one,&team_two,&left_ball);

        // targeted run
        targeted_run = (team_one - team_two) + 1;

        // calculate over gone and left
        over_gone = (300-left_ball)/6;
        over_left = left_ball/6;

        // calculate current average run
        current_average_run = team_two/over_gone;

        // calaculate need_average_run_rate
        need_average_run = targeted_run / over_left;

        // print result
        printf("%.2lf %.2lf\n",current_average_run,need_average_run);

    }
    return 0;
}