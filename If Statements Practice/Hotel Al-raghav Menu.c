// Hotel Al-raghav Menu//
#include <stdio.h>

int main() {
int choice,i;
printf("Welcome to Hotel Al-Raghav\n we are a multicuisine restaurant\n  please select from our wide variety of menu below:");
printf("\n1) Indian cusine \n2) Asian Cusine\n3) French\n");
printf("Please select the menu by pressing number:");
scanf("%d",&choice);
switch (choice){
    case 1: 
    printf("You chose Indian\n");
    printf("please select from the following items:\n");
    printf("1.Butter chicken\n");
    printf("2.Paneer\n");
    printf("3.Daal Makhani\n");
    printf("\nPlease select your order:");
    scanf("%d",&i);
    if (i==1)
        {
        printf("1 order of Butter Chicken placed");
        }
        else if (i==2)
        {
           printf("1 order of Panner Placed");
        } 
          else if( i==3)
        {
          printf("1 order of Daal Makhani placed");
        }
          else
        {
           printf("invalid");
        }
    break;
    case 2:
    printf("You chose Asian\n");
    printf("please select from the following items:\n");
     printf("1.Fried rice\n");
    printf("2.Dumplings\n");
    printf("3.Wonton\n");
    printf("\nPlease select your order:");
    scanf("%d",&i);
    if (i==1)
        {
        printf("1 order of Fried Rice placed");
        }
        else if (i==2)
        {
           printf("1 order of Dumplings Placed");
        } 
          else if( i==3)
        {
          printf("1 order of Wonton placed");
        }
          else
        {
           printf("invalid");
        }
    break;
    case 3:
     printf("You chose French\n");
    printf("please select from the following items:\n");
    printf("1.Fried Eggs\n");
    printf("2.Beef\n");
    printf("3.Duck\n");
     printf("\nPlease select your order:");
    scanf("%d",&i);
    if (i==1)
        {
        printf("1 order of Fried eggs placed");
        }
        else if (i==2)
        {
           printf("1 order of Beef Placed");
        } 
          else if( i==3)
        {
          printf("1 order of Duck placed");
        }
          else
        {
           printf("invalid");
        }
    break;
    default:
    printf("plz select a cuisine\n");
}
    return 0;
}