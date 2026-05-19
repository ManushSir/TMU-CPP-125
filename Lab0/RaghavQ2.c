/*Write a program that takes 3 integer values from the user and finds the average.*/
#include<stdio.h>
#define DENOM 3
int main()

{
    int a,b,c;
    int avg;
    printf("\n!!This programme is to find average of three numbers!!\n");
    printf("\nPlease enter first number:");
    scanf("%d",&a);
    printf("\nPlease enter second number:");
    scanf("%d",&b);
    printf("\nPlease enter third number:");
    scanf("%d",&c);
    avg = (a+b+c)/DENOM;
    printf("The Average of three number is :%d",avg);
    return 0;
}