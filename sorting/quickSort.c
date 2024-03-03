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
int partition(int arr[], int size)
{
    int i = 0, j = size - 1;
    int pivot = arr[0];
    do
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);
    swap(pivot, arr[j]);
    return j;
}
void quicksort(int arr[], int size)
{
    int j;
    partition(arr, size);
    quicksort(arr, size);
    quicksort(arr, size);
}
int main()
{
    int arr[] = {12, 4, 7, 4, 7, -4, 6, 10, __INT_MAX__};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort:");
    display(arr, size);
    quicksort(arr, size);
    printf("\nAfter sort:");
    display(arr, size);
    return 0;
}