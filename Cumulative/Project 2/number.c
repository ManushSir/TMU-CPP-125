// The Programme Compares three Value
#include <stdio.h>
#define init 0
int minof3(int a,int b,int c)
{
    int low = a;
    if(b<low) low=b;
    if(c<low) low =c;
    return low;
}
int maxof3(int a,int b,int c)
{
    int max= a;
    if(b>max) max =b;
    if(c>max) max =c;
        return max;
}
int main() {
    int one;
    int two;
    int three;

    printf("\nWelcome to the program\n");
    printf("\nWe will compare the three integers and put them in ascending order\n");
    printf("\nPlease enter three integrs:");
    scanf("%d",&one);
    scanf("%d",&two);
    scanf("%d",&three);
    int mi = minof3(one,two,three);
    int ma = maxof3(one,two,three);
    int *mid;
    if( one == mi && three == ma || one == ma  && three == mi )
    {
       mid = &two;
    }
    else if ( two == mi && three == ma || two == ma && three == mi )
    {
       mid = &one;
    }
    else 
    {
      mid = &three;  
    }
  

     printf("The number are : %d\t,%d\t,%d\t",
   mi,*mid,ma);
    return 0;
}
