/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
 Computes the tax due based on a tax table.
 * Pre : salary is defined.
 * Post: Returns the tax due for 0.0 <= salary <= 150,000.00;
 *       returns -1.0 if salary is outside the table range.
 *
 


*******************************************************************************/

#include <stdio.h>

float total_tax(float salary)
{
    int tax;
    if(salary<=0)
    {
        printf("invalid input");
    }
    else if(salary>=0 && salary<=55000)
    {
      tax=(float)0.0505*salary;  
    }
    else if(salary>=55000 && salary<=110000)
    {
       tax=(float)((salary-55000)*0.0915)+2777.5;
    }
    else if(salary>=110000 && salary<=150000)
    {
       tax=(float)((salary-110000)*0.1116)+2777.5+10065;
    }
    else
    {
        printf("Invalid Input");
    }
    return (tax);
}

int main(void)
{
    int income;
    printf("\nThis programme is created to calculate Tax\n");
    printf("\nPlease enter your net income: ");
    scanf("%d",&income);
    printf("\nThe total income tax on $%d is : $%0.2lf",income,total_tax(income));

    return 0;
}