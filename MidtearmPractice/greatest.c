/*************************************************************************
                 /C program to find largest of three numbers using nested if

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("This programme will tell you the largest number from three input");
    printf ("\nPlease enter first number:");
    scanf("%d",&a);
    printf ("\nPlease enter second number:");
    scanf("%d",&b);
    printf ("\nPlease enter first number:");
    scanf("%d",&c);
    if(a>b)
       {
           if(a>c){
               printf("%d is the greatest of all three numbers",a);
           }
           else {
               printf("%d is the greatest of all three numbers",c);
           }
       }
    else 
        {
               if(b>c)
               {
                   printf("%d is the greatest of all three numbers",b);
               }
               else 
               {
                   printf("%d is the greatest of all three numbers",c);
               }
        }
      
    return 0;
}