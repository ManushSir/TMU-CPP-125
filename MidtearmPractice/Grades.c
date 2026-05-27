/*The following C program uses a nested if-else statement to assign grades based on the marks entered:
If Marks are 40<Marks<60 -> Grade C
If Marks are 60<Marks<85 -> Grade B
If Marks are 85<Marks<95 -> Grade A
If Marks are Above 95 :  Grade A+ less than 40 : ****/

#include<stdio.h>

int main()
{
    int grade;
    printf("\nLet us display your grade on basis of marks !!\n");
    printf("\nPlease enter your grade:");
    scanf("%d",&grade);
    if(grade>=40 && grade<=100)
        if (grade>=40 && grade<=60)
        {
            printf("\nYour  score %d,You just passed, Your Grade is C",grade);
            
        }
        else if(grade>=60 && grade<=85)
        {
            printf("\nCongratulations for scoring %d, Your Grade is B",grade);
            
        }
        else if(grade>=85 && grade<=95)
        {
            printf("\nCongratulations for scoring %d, Your Grade is A",grade);
            
        }
        else 
        {
            printf("\nCongratulations !! for scoring %d , Your Grade is A+ , we are proud of  you !",grade);
        }
        else 
        {
            printf("\nYou failed !! Your grade is %d . Go home and study !!",grade);
        }

    return 0;
}