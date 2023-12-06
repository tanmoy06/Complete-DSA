#include <stdio.h>
#include <stdlib.h>
struct Arrays
{
    int *A;
    int size;
    int length;
};
void Display(struct Arrays arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
};
int main()
{
    struct Arrays arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.length);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    Display(arr);
}
