#include <stdio.h>
void display(int a[], int size)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 34, 1, 265, 564, 34, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[size];
    int i, j;
    display(arr, size);
    for (i = size - 1, j = 0; i >= 0; i--, j++)
    {
        arr2[j] = arr[i];
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
    }
    display(arr, size);
    return 0;
}
