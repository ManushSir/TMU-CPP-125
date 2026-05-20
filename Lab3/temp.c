// Write a C program that estimates the temperature T (in °C) in a freezer in case of power failure. The temperature is given by the following formula: 𝑇 = (4 * SQRT(𝑡)/𝑡+2) − 20 Where t is the time (in minutes) since the power failure.  Your program should prompt the user to enter how long it has been since the start of the power failure in minutes. //    
#include <stdio.h>
#include <math.h>
#define CONST 20
int main() {
    int t;
    float temp;
    printf("Kindly provide the time lapsed since the start of the power failure in minutes :");
  scanf("%d",&t);
  temp=((4-sqrt(t))/t+2)-CONST;
  printf("The temprature of the fridge since %d minutes will be %.3lf celcius",t,temp);
    return 0;
}
