/*
 * evenodd.c
 *Creating a program where user inputs a value and we have to define if it is even or odd
 *  Created on: May 22, 2026
 *      Author: Manush-Sir
 */

#include<stdio.h>

int main()

{
int num;
printf("\n This program is designed to determine if number is even or odd \n ");
printf("Please input a number between 0 to 1000");
scanf("%d",&num);
if(num%2==0){

	printf("The %d is Even number",num);
}

else
{
	printf("The %d is an odd number",num);
}

return 0;

}
