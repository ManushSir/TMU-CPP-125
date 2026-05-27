/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Simple Calculator

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,d;
    char op;
    printf("\nWelcome to my calculator\n");
    printf("\nPlease enter the first number:");
    scanf("%d",&a);
    printf("\nPlease enter the second number:");
    scanf("%d",&b);
    printf("\n Kindly select the operation :");
    scanf(" %c",&op);/*leave space after quaote and %, dont ask why !!!*/
    switch(op) {
        
    case '+':
       d=a+b;
       printf("%d + %d = %d",a,b,d);
       break;
    case '-':
       d=a-b;
       printf("%d - %d = %d",a,b,d);
       break;
    case '/':
       d=a/b;
       printf("%d / %d = %d",a,b,d);
       break;
    case 'x': case 'X':
       d=a*b;
       printf("%d X %d = %d",a,b,d);
       break;
    }


    return 0;
}