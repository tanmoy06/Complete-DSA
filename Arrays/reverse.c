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
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 5, 2, 3, 1, 7, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    display(arr, size);
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    display(arr, size);
    return 0;
}
