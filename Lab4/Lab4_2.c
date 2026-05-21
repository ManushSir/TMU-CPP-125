
/*Write a C program that asks the user to enter three floating point values (use printf and scanf) to the screen and prints out their average in 3 decimal digits. /
#include <stdio.h>

int main() {
   float a,b,c,avg;
   printf("enter three floating point values");
   scanf("%f" "%f" "%f",&a,&b,&c);
   avg=(a+b+c)/3.0;
   printf("the avf of %0.1f,%0.1f,%0.1f is %0.3f.\n",a,b,c,avg);

    return 0;
}