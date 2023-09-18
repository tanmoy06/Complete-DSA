#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle o;          // declarisation
    struct rectangle r = {2, 3}; // declarisation with initialisation
    r.length = 15;
    r.breadth = 10;
    printf("Area = %d\n", (r.length * r.breadth));
    return 0;
}
