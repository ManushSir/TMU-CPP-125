// Multidimensional Array
#include <stdio.h>

int main() {
    // Write C code here
    printf("\nWe will print a multidimensional array\n");
    int array [4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for (int i=0;i<=3;i++)
    {
        for (int j=0;j<=2;j++)
        {
        printf("%d\t",array[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}