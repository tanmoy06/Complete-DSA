#include <stdio.h>
int length(char a[])
{
    int i, sum = 0;
    for (i = 0; a[i] != '\0'; i++) /*'\0' represents NULL CHAR or end of character*/
    {
        if (a[i] != 32) /*for removing space*/
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    int i;
    char name[] = "Tanmoy Sarkar";
    printf("Name : %s", name);
    int len = length(name);
    printf("\nLength of the name : %d\n", len);
    for (i = 0; i < len + 1; i++)
    {
        if (name[i] > 96 && name[i < 123])
        {
            name[i] = name[i] - 32;
        }
    }
    printf("Upper Case: %s", name);
    return 0;
}