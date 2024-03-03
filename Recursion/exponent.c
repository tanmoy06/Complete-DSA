#include <stdio.h>
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(m, n - 1) * m;
    }
}
int powers(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return powers(m * m, n / 2);
    }
    else
    {
        return m * powers(m * m, (n - 1) / 2);
    }
}
int main()
{
    int res = powers(2, 5);
    printf("%d", res);
}