#include<stdio.h>
#include<math.h>

int main(){
    int seconds;
    int day = 86400;
    int hour = 3600;
    int minute = 60;

    scanf("%d", &seconds);

    int dayout = floor(seconds/day);
    int hourout = floor((seconds-(dayout*day))/hour);
    int minuteout = floor(((seconds-(dayout*day))-(hourout*hour))/minute);
    int secondsout = floor((((seconds-(dayout*day))-(hourout*hour))-(minuteout*minute)));

    printf("%d s = %d d %d h %d m %d s", seconds, dayout, hourout, minuteout, secondsout);
    return 0;
}
