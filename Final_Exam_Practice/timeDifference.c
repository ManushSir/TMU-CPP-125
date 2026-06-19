/* Calculate Difference Between Two Time Periods
In this program, the user is asked to enter two time periods and these two periods are stored in structure variables startTime and stopTime respectively.

Then, the function differenceBetweenTimePeriod() calculates the difference between the time periods. The result is displayed from the main() function without returning it (using call by reference technique).*/
#include <stdio.h>
struct TIME{
    int hour;
    int minutes;
    int seconds;
};
int differenceBetweenTimePeriod(struct TIME start,struct TIME stop,struct TIME *difference){
    if(stop.seconds<start.seconds){
     stop.seconds += 60;/* This assigns the time in seconds*/
     stop.minutes -= 1;
    }
    difference->seconds = stop.seconds-start.seconds;
    if(stop.minutes<start.minutes){
     stop.minutes += 60;
     stop.hour -= 1;
    }
    difference ->minutes = stop.minutes-start.minutes;
    difference->hour = start.hour-stop.hour;
}
int main() {
   printf("This program is designed to calculate time differences:");
   struct TIME startTime;
   startTime.hour = 13;
   startTime.minutes = 24;
   startTime.seconds = 23;
   struct TIME stopTime;
   stopTime.hour = 15;
   stopTime.minutes= 22;
   stopTime.seconds =02;
   struct TIME difference;
   differenceBetweenTimePeriod(startTime,stopTime,&difference);
   
   printf("\nThe Time difference is:%d : %d : %d \n",difference.hour,difference.minutes,difference.seconds);
    return 0;
}
