#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int main()
{
    int n = 10;
    int result = sum(n);
    printf("%d\n", result);
    printf("%d\n", (n * (n + 1)) / 2);
    return 0;
}