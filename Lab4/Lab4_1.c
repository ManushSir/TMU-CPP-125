
/*Write a simple program that calculates the value b in a given (s and m).  
For this program you must use this formula: b = 1086 (5s + 297m) / 247 
Note that the s is in Kelvin and m is in Fahrenheit when the user gives these values. 
You must convert this units (search online for the conversion formulas) because the s and m 
will be in degrees Celsius when you use it for the given formula (both should be used in Celsius). 
Write your solution as a sequence of steps that can be followed in order.  
Note that for all problems you are only allowed to use the material covered so far. Find the b value in 5 decimal digits. */
#include <stdio.h>
#define CONS 32
#define CONSF 1.8
#define CONSK 273.15

int main()
{
    double s,m,a,c,b;
    printf("\nWe are writing program to combine Kelvin and Fahrenheit");
    printf("\nPlease enter the 's' in Kelvin ");
    scanf("%lf10",&s);
    printf("\nPlease enter the 'm' in Fahrenheit ");
    scanf("%lf",&m);
    a=(m-CONS)/CONSF;
    c=s-CONSK;
    b=1086*((5*c)+(297*a))/247;
    printf("\nThe Requested Output is :%0.5lf",b);

    return 0;
}