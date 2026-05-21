/*Write a C program that asks the user to enter three integer values (use printf and scanf) to the screen and prints out their average with 4 decimal digits*/

#include <stdio.h>

int main() {
  int a,b,c;
  float avg;
 printf("plz put in 3 # to find avg of");
  scanf("%d" "%d" "%d",&a,&b,&c);
 avg=(float)(a+b+c)/3;
  printf("ur avg is %0.3f",avg);

    return 0;
}