#include <stdio.h>
#include <stdbool.h>
#define n 5
int top = -1;
int myStack[n];
bool is_full()
{
    if (top == n)
    {
        return true;
    }
    return false;
}
bool is_empty()
{
    if (top < 0)
    {
        return true;
    }
    return false;
}
int push(int a)
{
    if (is_full())
    {
        printf("Exception! Stack OverFlowed.");
    }
    else
    {
        // top = 0;
        top = top + 1;
        myStack[top] = a;
        printf("Item added: %d\n", a);
    }
}
void display()
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("index: %d -> item: %d\n", i, myStack[i]);
    }
}
int main(int argc, char const *argv[])
{
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    // display();
    push(10);
    display();
    push(10);
    return 0;
}
