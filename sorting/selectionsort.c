#include <stdio.h>
void display(int a[], int size)
{
    int i;
    printf("\nElements are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void selectionsort(int arr[], int size)
{
    int i, j, k;
    for (i = 0, k = 0; i < size - 1; i++, k++)
    {
        for (j = i; j < size; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
                swap(arr[i], arr[k]);
            }
        }

        int temp = arr[k];
        arr[k] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {12, 4, 7, 4, 7, -4, 6, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort:");
    display(arr, size);
    selectionsort(arr, size);
    printf("\nAfter sort:");
    display(arr, size);
    return 0;
}