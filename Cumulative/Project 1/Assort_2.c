/*This Programme generates Random number of array*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZE_OF_ARRAY 20
#define TRUE 1
#define FALSE 0
#define NOT_FOUND -1

/* Function prototype */
int binary_srch(const int search_array[], int target, int size);

int main(void)
{
    srand(time(NULL));
    int data[SIZE_OF_ARRAY];
    int target;
    int result;
    for (int i = 0; i < SIZE_OF_ARRAY; i++) 
    {
        data[i] = (rand() % 100) + 1;  // 1–100
    }
      for (int i = 0; i < SIZE_OF_ARRAY - 1; i++) 
      {
        for (int j = 0; j < SIZE_OF_ARRAY - 1 - i; j++) 
        {
            if (data[j] > data[j + 1]) 
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
for (int i = SIZE_OF_ARRAY - 1; i > 0; i--) {
       
    }

    printf("Array elements (sorted):\n");
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        printf("%d ", data[i]);
    printf("\n");

    printf("Enter an integer to search for: ");
    scanf("%d", &target);

    result = binary_srch(data, target, SIZE_OF_ARRAY);

    if (result == NOT_FOUND)
        printf("Target %d was not found in the array.\n", target);
    else
        printf("Target %d found at index %d.\n", target, result);

    return 0;
}

/* Binary search function implementing the given algorithm */
int binary_srch(const int search_array[], int target, int size)
{
    int top, bottom, middle, index, found;

    bottom = 0;
    top = size - 1;
    found = FALSE;

    while (bottom <= top && found == FALSE)
    {
        middle = (bottom + top) / 2;

        if (search_array[middle] == target)
        {
            found = TRUE;
            index = middle;
        }
        else if (search_array[middle] > target)
        {
            top = middle - 1;
        }
        else
        {
            bottom = middle + 1;
        }
    }

    if (found == TRUE)
        return index;
    else
        return NOT_FOUND;
}
