// Write a C program that reads a character from the keyboard and print its ASCII code to the standard output in 7 spaces.     //
#include <stdio.h>

int main() {
   char key;
   int i;
   for(i=1;i<=5;i++){
   printf("\n Please enter any Character: ");
   scanf("%c",&key);
   printf("\n The ASCII Value of '%c' is %7d \n ",key,key);
   }
     return 0; 
}
