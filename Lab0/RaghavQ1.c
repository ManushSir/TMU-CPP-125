/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*write a code which prints your name and in then start declaring variables. 
Inside your code add 5 variables, including two integer type, named num1 and num2. 
2 double type, named num3, and num4. 
one character type, named cha1.
Assign 100 and 200 to the integers. 
0.09 and -99.9 to doubles, and 
‘Z’ to the character.*/
#include <stdio.h>
int main()
{
char cha1[10];
double num3 , num4; 
int num1,num2;
printf("\nHey There ! What is your name ?");
scanf("%s",&cha1);
printf("\nHey %s , nice to meet you !\n",cha1);
printf("Please enter two integers between 0 and 300\n");
scanf("%d""%d",& num1,&num2);
/*scanf("%d",& num2);*/
printf("The numbers you entered are\n%2d\n%4d",num1,num2);
printf("\nPlease enter your desired decimal value:\n");
scanf("%lf",& num3);
scanf("%lf",& num4);
printf("\nThe numbers you entered are\n%0.3lf\n%2.3lf",num3,num4);
    return 0;
}