// we need two sorted arrays for merging operation,concatination,comparing,copying
#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr3->length; i++)
    {
        arr1->A[i] = arr3->A[k++];
    }
    for (; j < arr3->length; j++)
    {
        arr1->A[j] = arr3->A[k++];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 15;
    return arr3;
}
int main()
{
    struct Array arr1 = {{1, 2, 3, 4, 5}, 10, 5};
    struct Array arr2 = {{6, 7, 8, 9, 10}, 10, 5};
    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    display(*arr3);
    return 0;
}