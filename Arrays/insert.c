#include <stdio.h>
#include <stdlib.h>
struct Arrays
{
    int *A;
    int size;
    int length;
};
void display(struct Arrays arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
void append(struct Arrays *arr, int item)
{
    printf("\nEnter new element: ");
    scanf("%d", &item);
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = item;
    }
    else
    {
        printf("Overflowed!\n");
    }
}
void insert(struct Arrays *arr, int index, int item)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = item;
        arr->length++;
    }
}
int main()
{
    struct Arrays arr;
    int n;
    printf("Enter size of array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr.length = n;
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    display(arr);
    append(&arr, 15);
    printf("\nAfter append: \n");
    display(arr);
    insert(&arr, 2, 100);
    printf("\nafter insert:\n");
    display(arr);
    return 0;
}
