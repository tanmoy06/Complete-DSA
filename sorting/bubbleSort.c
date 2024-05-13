#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    printf("Elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubblesort(int arr[], int size)
{
    int i, j, flag;
    for (i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            flag = 1;
        }
        if (flag = 0)
        {
            break;
        }
    }
}
int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int len = sizeof(a) / sizeof(a[0]);
    printf("Before sort: ");
    display(a, len);
    bubblesort(a, len);
    printf("\nAfter sort: ");
    display(a, len);
}