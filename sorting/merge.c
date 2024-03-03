#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
void merge(int a[], int b[], int len1, int len2)
{
    int i, j;
    int k = 0;
    int lengthofmergedarray = len1 + len2;
    int mergedArray[lengthofmergedarray];
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (a[i] < b[j])
            {
                a[i++] = mergedArray[k++];
            }
            else
            {
                b[j++] = mergedArray[k++];
            }
        }
    }
    for (; i < len1; i++)
    {
        a[i] = mergedArray[k++];
    }
    for (; j < len2; j++)
    {
        b[j] = mergedArray[k++];
    }
    display(mergedArray, lengthofmergedarray);
}
int main()
{
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int arr2[] = {2, 4, 6, 8, 10, 12, 100};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, size1, size2);
}