
/*Write a program that asks for three int numbers, A , B and C. the program then will ask the user to input A int numbers.
if the int numbers fall between range of B and C , then their average is calculated and result will be returned to main. */
#include <stdio.h>
int inte(int A,int B,int C)
{
    int count =0;
    int value;
    double sum;
 for (int i=0;i<A;i++){
    printf("\nPlease Enter your value :%d,\nplease ensure it is greater than %d and less than %d:",i+1,B,C);
    scanf("%d",&value);
 }
 if(value>=B && value <=C){
     sum =+ value;
     count ++;
 }
 else {
     printf("\n!!The number is out of Bond !!!\n");
 }
 return sum/count;
 }

int main ()
{
    int x,B,C,a;
    printf("\nThis programme is Creted to enter numbers that you like and find their average\n");
    printf("\nPlease enter the amount of value that you would like to add :");
    scanf("%d",&x);
    printf("\n Please enter the minimum range:");
    scanf("%d",&B);
    printf("\n Please enter the maximum range:");
    scanf("%d",&C);
a = inte(x,B,C);
printf("\nThe average of your numbers is : %d",a);
 return 0;
}
