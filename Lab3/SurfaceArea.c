// Write C programs to compute the Surface Area and Volume of a Cube. //    
#include <stdio.h>
#include <math.h>
#define CONST 20
int main() {
    int s,sa,v;
    printf("Kindly provide the side of the cube in meter :");
  scanf("%d",&s);
     sa=6*s*s;
     v=s*s*s;
  printf("\nThe surface area of side %d m is : %d meter Square\n",s,sa);
  printf("\nThe volume of side %d m is : %d meter cube\n",s,v);
    return 0;
}
