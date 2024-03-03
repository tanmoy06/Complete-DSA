#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int linearSearch(struct Array arr, int n)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr;
    int n, i, index;
    printf("Enter the size of array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    arr.length = n;
    for (i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    printf("Array's elements are: \n");
    Display(arr);
    printf("\n");
    index = linearSearch(arr, 5);
    if (index != -1)
    {
        printf("Found at index: %d\n", index);
    }
    else
    {
        printf("Not Found.\n");
    }
    return 0;
}
