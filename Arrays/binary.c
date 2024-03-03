#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[15];
    int size;
    int length;
};
int BinarySearch(struct Array arr, int key)
{
    int low, mid, high;
    low = 0;
    high = arr.length - 1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int index;
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 15, 10};
    index = BinarySearch(arr, 10);
    if (index != -1)
        printf("Item found at : %d\n", index);
    else
        printf("Item not found.\n");
    return 0;
}
