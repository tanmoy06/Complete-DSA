#include <stdio.h>
double e(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}
int main()
{
    double res = e(1, 10);
    printf("Resuld is : %.3lf", res);
    return 0;
}