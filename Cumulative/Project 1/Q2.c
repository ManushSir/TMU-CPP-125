#include <stdio.h>

#define SIZE_OF_ARRAY 10
#define TRUE 1
#define FALSE 0
#define NOT_FOUND -1

/* Function prototype */
int binary_srch(const int search_array[], int target, int size);

int main(void)
{
    int data[SIZE_OF_ARRAY] = {3, 8, 15, 23, 42, 56, 71, 89, 95, 100};
    int target;
    int result;

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
