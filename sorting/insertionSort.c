#include <stdio.h>
#include <stdlib.h>
void display(int a[], int length)
{
    int i;
    printf("\nElements are: \n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}
void insertionsort(int arr[], int size)
{
    int i, j, x;
    for (i = 1; i < size; i++)
    {
        j = i - 1;
        x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}
int main()
{
    int a[] = {1, 4, 2, 54, 6, 2, -7, 8, 56};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Before sorting: ");
    display(a, size);
    insertionsort(a, size);
    printf("\nAfter sorting: ");
    display(a, size);
    return 0;
}
