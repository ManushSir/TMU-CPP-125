/* Write one complete C program that asks the user for a floating point number and displays the absolute value of the number with two decimals of accuracy. You are not allowed to use the abs or fabs functions. For this questions use a user defined function!*/
#include<stdio.h>
#define abs -1

double absolute(double val)
{
    double a;
    if(val>=0){
        a=(float)val;
    }
    else {
        a=(float)(abs*val);
    }
    return a;
}
int main ()
{
    double val1;
    printf("\nThis program is designed to give you absolute value\n");
    printf("\nPlease enter the value:");
    scanf("%lf",&val1);
    printf("\nThe absolute value of your %lf is :%0.2lf",val1,absolute(val1));
    return 0;
}