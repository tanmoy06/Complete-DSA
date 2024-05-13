#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(float arr[], int low, int high)
{
    float pivot = arr[low];
    int i = low, j = high;
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
            swap(&arr[i], &arr[j]);
        }

    } while (i < j);
    swap(&arr[low], &arr[j]);
    return j;
}
void quickSort(float a[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(a, low, high);
        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}
int main()
{
    float a[] = {0, 2, 5, -1, 5, 2, 33, 12};
    quickSort(a, 0, 8);
    for (int i = 0; i < 8; i++)
    {
        printf("%.2f ", a[i]);
    }
    printf("\n");
    return 0;
}