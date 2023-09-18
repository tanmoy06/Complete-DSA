#include <stdio.h>
struct students
{

    int roll;

    int cgpa;
};
int main()
{
    struct students s;
    s.cgpa = 3;
    s.roll = 5;

    printf("%d -> %d", s.roll, s.cgpa);
    return 0;
}
