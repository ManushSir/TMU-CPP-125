/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Stone Paper Scissor Game

*******************************************************************************/

#include <stdio.h>

int main()
{
    char x;
    printf("\nWelcome to  Stone Paper Scissor Game\n ");
    printf("\nPlease enter your choice:");
    scanf("%s",&x);
    switch (x) 
    {
        case 'r':
        printf("You selected %c ! You win",x);
        break;
        case 'p':
        printf("You selected paper ! You loose");
        break;
        case 's':
        printf("You selected scissor ! It's a tie Try again");
        break;
    }

    return 0;
}