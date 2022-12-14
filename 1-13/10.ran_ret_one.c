#include <stdio.h>

int main(void){
    // create necessary variable
    int testcase, // total test case
        r_one, // opponent run
        r_two, // batsman run
        ball_left, // ball left 
        played; // total ball played
        
    double current_runrate, // current run rate 
           need_runrate; // need run

    scanf("%d",&testcase);

    while(testcase--){
        scanf("%d %d %d",&r_one,&r_two,&ball_left);
        
        played = 300 - ball_left;
        current_runrate = (r_two*1.0 / played*1.0) * 6.0;
        need_runrate = ((r_one*1.0- r_two*1.0 +1)/ ball_left)*6.0;
        
        printf("%0.2lf %0.2lf\n\n",current_runrate,need_runrate);
    }
    return 0;
}