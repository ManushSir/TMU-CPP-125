/**************************************************************************
 * Our next program asks the user to enter the amount of
the trade, then displays the amount of the commission:
The trade amount will be charged accouding to fees : 
The commision rate will be as below :
under dollar $2500 -->Commision rate : $30+1.7%
between $2500 and 5000 -->Commision rate : $56+0.66%
between $5000 to $1000 -->Comission rate : $76 + 0.34%
Enter value of trade: 30000
Commission: $166.00

*******************************************************************************/

#include <stdio.h>

int main()
{
    int komisn;
    float com;
    printf("\nThis programme will determine the comission of realtor on bases of fees\n");
    printf("\nPlease enter the amount of Comission:");
    scanf("%d",&komisn);
    if(komisn>=0 && komisn <= 2500)
    {
      com = (float) (30+((1.7*komisn)/100));
      printf("The total comission for %d will be : $%0.2f",komisn,com);
    }
    else if(komisn>=2500 && komisn <= 5000)
    {
      com = (float) (56+((0.66*komisn)/100));
      printf("The total comission for %d will be : &%0.2f",komisn,com);
    }
    else if(komisn>=5000 && komisn <= 10000)
    {
      com = (float) (76+((0.34*komisn)/100));
      printf("The total comission for %d will be : $%0.2f",komisn,com);
    }
    else if (komisn>= 10000)
    {
        ("\nThe input value is out of range, Please try again");
    }
    return 0;
}
