#include <stdio.h>
#include <stdlib.h>
struct Arrays
{
    int *A;
    int length;
    int size;
} arr;
void Display(struct Arrays arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
};
void delete(struct Arrays *arr, int index)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
    else
    {
        printf("\nIndex %d is not valid.\n", index);
    }
}
int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &arr.length);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    Display(arr);
    delete (&arr, 2);
    printf("\nAfter delete: \n");
    Display(arr);
}